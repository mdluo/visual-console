
//  Project:    VisualConsole
//  Version:    0.1.0
//  File:       Window.cpp
//  Date:       2015-02-25

#include "StdAfx.h"
#include "Window.h"

using namespace VisualConsole;

Window::Window()
{
    
}

bool Window::PreLoad()
{
    this->hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    this->hIn = GetStdHandle(STD_INPUT_HANDLE);
    return true;
}