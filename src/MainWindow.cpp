//
// Created by cn on 26.09.19.
//

#include "AFrame.h"
#include "MainWindow.h"

bool MainWindow :: OnInit() {

    AFrame* aFrame = new AFrame("clingo-debug-gui", wxPoint(10, 10), wxSize(1000, 1000));
    aFrame->Show(true);

    return true;
};



