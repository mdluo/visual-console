
//  Project:    VisualConsole
//  File:       Window.h
//  Author:		Mingdong Luo
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
        SMALL_RECT rWindowSize;
        string sTitle;

        bool PreLoad(int, int);

    public:
        Window(int, int);
		bool SetBuffer(COORD);
		bool SetWindowSize(SMALL_RECT);
		string GetTitle();
		bool SetTitle(string);
    };

}

#endif