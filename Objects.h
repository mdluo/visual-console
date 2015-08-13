//  Project:    VisualConsole
//  File:       Objects.h
//  Author:		Mingdong Luo
//  Date:       2015-08-13
//  Comment:	Define 

#ifndef _VISUALCONSOLE_TEXT_H_
#define _VISUALCONSOLE_TEXT_H_

#include "stdafx.h"

namespace VisualConsole {
	
	class Text {
	private:
		string sContent;
		COORD cCoord;
		WORD wColor;
	public:
		Text(string, WORD);
	};
}

#endif