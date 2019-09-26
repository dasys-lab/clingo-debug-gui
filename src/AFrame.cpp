//
// Created by cn on 26.09.19.
//

#include "AFrame.h"


AFrame ::AFrame(const wxString &title, const wxPoint &pos, wxSize size) :
wxFrame(NULL, wxID_ANY, title, pos, size){


    CreateStatusBar();
    SetStatusText("Welcome to WxWidgets");

};

