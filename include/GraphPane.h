#pragma once

#include <wx/wx.h>

class GraphPane: public wxPanel{
public:
    GraphPane(wxPanel* parent);
    void paintEvent(wxPaintEvent & evt);
    void paintNow();
    void render(wxDC& dc);

    DECLARE_EVENT_TABLE()
};