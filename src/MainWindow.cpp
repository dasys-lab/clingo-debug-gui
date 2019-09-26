//
// Created by cn on 26.09.19.
//

#include "AFrame.h"
#include "MainWindow.h"

bool MainWindow :: OnInit() {

    AFrame* aFrame = new AFrame("clingo-debug-gui", wxPoint(50, 50), wxSize(100, 100));
    aFrame->Show(true);

    return true;
};



