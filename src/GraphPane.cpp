#include "GraphPane.h"

BEGIN_EVENT_TABLE(GraphPane, wxPanel)
    EVT_PAINT(GraphPane::paintEvent)
    EVT_SIZE(GraphPane::resizeEvent)
END_EVENT_TABLE()

GraphPane::GraphPane(wxPanel* parent) :wxPanel(parent)
{
}

void GraphPane::paintEvent(wxPaintEvent & evt)
{
    wxPaintDC dc(this);
    render(dc);
}

void GraphPane::resizeEvent(wxSizeEvent &evt){
    paintNow();
    this->GetParent()->Update();
}

void GraphPane::paintNow()
{
    wxClientDC dc(this);
    render(dc);
    this->GetParent()->Update();
}

void GraphPane::render(wxDC&  dc)
{

    // draw a circle
//    dc.SetBrush(*wxGREEN_BRUSH); // green filling
//    dc.SetPen( wxPen( wxColor(255,0,0), 5 ) ); // 5-pixels-thick red outline
//    dc.DrawCircle( wxPoint(200,100), 25 /* radius */ );

    dc.SetBackground(*wxGREY_BRUSH);

    // draw a line
    dc.SetPen( wxPen( wxColor(0,0,0), 3 ) ); // black line, 3 pixels thick
    dc.DrawLine( 125, 125, 315, 125 ); // draw line across the rectangle

    // draw a rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen( wxPen( wxColor(255,175,175), 10 ) ); // 10-pixels-thick pink outline
    dc.DrawRectangle( 300, 100, 100, 50 );

    // draw a second rectangle
    dc.SetBrush(*wxBLUE_BRUSH); // blue filling
    dc.SetPen( wxPen( wxColor(255,175,175), 10 ) ); // 10-pixels-thick pink outline
    dc.DrawRectangle( 100, 100, 100, 50 );

    // draw some text
    dc.DrawText(wxT("Testing 1"), 120, 115);
    dc.DrawText(wxT("Testing 2"), 320, 115);

    // Look at the wxDC docs to learn how to draw other stuff
}
