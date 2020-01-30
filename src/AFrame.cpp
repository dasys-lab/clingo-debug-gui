//
// Created by cn on 26.09.19.
//

#include "AFrame.h"
#include "GraphPane.h"
#include <wx/splitter.h>
#include <wx/treectrl.h>


AFrame ::AFrame(const wxString &title, const wxPoint &pos, wxSize size) :
wxFrame(NULL, wxID_ANY, title, pos, size){
    CreateStatusBar();
    SetStatusText("Welcome to WxWidgets");

    wxBoxSizer *sizerMain = new wxBoxSizer(wxVERTICAL);
    wxSplitterWindow* splitter = new wxSplitterWindow(this, wxID_ANY);
    splitter->SetSashGravity(0.2);
    splitter->SetMinimumPaneSize(20);
    splitter->SetSplitMode(wxSPLIT_VERTICAL);
    sizerMain->Add(splitter, 1, wxEXPAND, 0);

    wxPanel* panelTree = new wxPanel(splitter, wxID_ANY);
    wxBoxSizer* sizerTree = new wxBoxSizer(wxVERTICAL);
    wxTreeCtrl* tree = new wxTreeCtrl(panelTree, wxID_ANY);

    tree->AddRoot(wxString("Test.asp"));
    tree->AppendItem(tree->GetRootItem().GetID(), wxString("Line 1;"));
    tree->ExpandAll();

    sizerTree->Add(tree, 1, wxEXPAND, 0);
    panelTree->SetSizer(sizerTree);

    wxPanel* panelGraph = new wxPanel(splitter, wxID_ANY);
    wxBoxSizer* sizerGraph = new wxBoxSizer(wxVERTICAL);
    GraphPane* graph = new GraphPane(panelGraph);
    sizerGraph->Add(graph,1, wxEXPAND);
    panelGraph->SetSizer(sizerGraph);

    splitter->SplitVertically(panelTree, panelGraph);
    this->SetSizer(sizerMain);
    sizerMain->SetSizeHints(this);
};

