#include "clingo-debug-gui/MainFrame.h"
#include "clingo-debug-gui/MainWindow.h"
#include <wx/string.h>

bool MainWindow :: OnInit() {
    std::cout << "1" << std::endl;
    wxFrame *frame = new wxFrame((wxFrame*) NULL, ID_MainWindow, _T("Test"));
    frame->CreateStatusBar();
    frame->SetStatusText(_T("Hello World"));
    frame->Show(true);
    SetTopWindow(frame);
//    MainFrame* aFrame = new MainFrame(wxText("clingo-debug-gui"), wxPoint(10, 10), wxSize(100, 100));
//    std::cout << "2" << std::endl;
//    aFrame->Maximize(true);
//    std::cout << "3" << std::endl;
//    aFrame->Show(true);
//    std::cout << "4" << std::endl;
//    aFrame->Raise();
//    std::cout << "5" << std::endl;
//    aFrame->SetFocus();
//    std::cout << "6" << std::endl;

    return true;
};
