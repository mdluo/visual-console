
//  Project:    VisualConsole
//  Version:    0.1.0
//  File:       Window.h
//  Date:       2015-02-25

#ifndef _VISUALCONSOLE_WINDOW_H_
#define _VISUALCONSOLE_WINDOW_H_

#include "stdafx.h"

using namespace std;

namespace VisualConsole {

    class Window
    {
    private:
        CWnd *pWnd;
        HANDLE hOut;
	    HANDLE hIn;
        CONSOLE_SCREEN_BUFFER_INFO bInfo;
        COORD cBuffer;
        SMALL_RECT rSize;
        string sTitle;

        bool PreLoad();

    public:
        Window();

    };

}

#endif