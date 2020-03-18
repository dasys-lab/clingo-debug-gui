#include "clingo-debug-gui/MainFrame.h"
#include "clingo-debug-gui/MainWindow.h"
#include "config.h"

bool MainWindow :: OnInit() {
    std::cout << "Commit hash: " << GIT_HASH;
    std::cout.flush();
    MainFrame* aFrame = new MainFrame(_T("clingo-debug-gui"), wxPoint(10, 10), wxSize(100, 100));
    aFrame->Maximize(true);
    aFrame->Show(true);
    aFrame->Raise();
    aFrame->SetFocus();

    return true;
};
