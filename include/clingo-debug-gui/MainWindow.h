#pragma once

#include <wx/wx.h>
#include <wx/button.h>

class MainWindow : public wxApp {

public:
    virtual bool OnInit();

};

wxDECLARE_APP(MainWindow);

