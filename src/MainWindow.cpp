#include "AFrame.h"
#include "MainWindow.h"

bool MainWindow :: OnInit() {
    AFrame* aFrame = new AFrame("clingo-debug-gui", wxPoint(10, 10), wxSize(100, 100));
    aFrame->Maximize(true);
    aFrame->Show(true);
    aFrame->Raise();
    aFrame->SetFocus();

    return true;
};



