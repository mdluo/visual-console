
//  Project:    VisualConsole
//  Version:    0.1.0
//  File:       Window.cpp
//  Date:       2015-02-25

#include "StdAfx.h"
#include "Window.h"

using namespace VisualConsole;

Window::Window(int x, int y)
{
    if (PreLoad(x, y))
    {

    }
}

bool Window::PreLoad(int x, int y)
{
    bool bSuccess = true;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    hIn = GetStdHandle(STD_INPUT_HANDLE);
    bSuccess = (hOut != NULL && hIn != NULL);

    cBuffer.X = x;
    cBuffer.Y = y;
    bSuccess = (SetConsoleScreenBufferSize(hOut, cBuffer) != 0);

    rWindowSize.Left = 0;
	rWindowSize.Top = 0;
	rWindowSize.Right = x - 1;
	rWindowSize.Bottom = y - 1;
	bSuccess = (SetConsoleWindowInfo(hOut, true, &rWindowSize) != 0);

    return bSuccess;
}