#include "clingo-debug-gui/MainFrame.h"
//#include "GraphPane.h"
#include <wx/splitter.h>
#include <wx/treectrl.h>


MainFrame ::MainFrame(const wxString &title, const wxPoint &pos, wxSize size) :
        wxFrame(NULL, ID_MainWindow, title, pos, size){
//    std::cout << "1.1" << std::endl;
//    CreateStatusBar();
//    SetStatusText("Welcome to WxWidgets");

//    std::cout << "1.2" << std::endl;
//    wxBoxSizer *sizerMain = new wxBoxSizer(wxVERTICAL);
//    wxSplitterWindow* splitter = new wxSplitterWindow(this, wxID_ANY);
//    splitter->SetSashGravity(0.2);
//    splitter->SetMinimumPaneSize(20);
//    splitter->SetSplitMode(wxSPLIT_VERTICAL);
//    sizerMain->Add(splitter, 1, wxEXPAND, 0);
//
//    std::cout << "1.3" << std::endl;
//    wxPanel* panelTree = new wxPanel(splitter, wxID_ANY);
//    wxBoxSizer* sizerTree = new wxBoxSizer(wxVERTICAL);
//    wxTreeCtrl* tree = new wxTreeCtrl(panelTree, wxID_ANY);
//
//    std::cout << "1.4" << std::endl;
//    tree->AddRoot(wxString("Test.asp"));
//    tree->AppendItem(tree->GetRootItem().GetID(), wxString("Line 1;"));
//    tree->ExpandAll();
//
//    std::cout << "1.5" << std::endl;
//    sizerTree->Add(tree, 1, wxEXPAND, 0);
//    panelTree->SetSizer(sizerTree);
//
//    wxPanel* panelGraph = new wxPanel(splitter, wxID_ANY);
//    wxBoxSizer* sizerGraph = new wxBoxSizer(wxVERTICAL);
//    GraphPane* graph = new GraphPane(panelGraph);
//    sizerGraph->Add(graph,1, wxEXPAND);
//    panelGraph->SetSizer(sizerGraph);
//
//    splitter->SplitVertically(panelTree, panelGraph);
//    this->SetSizer(sizerMain);
//    sizerMain->SetSizeHints(this);
};

