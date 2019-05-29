#ifndef CONSOLE_H_INCLUDED
#define CONSOLE_H_INCLUDED


#include <stdio.h>
#include <windows.h>
#include <conio.h>

///////
int Console () ;
///////

int Console()
{
	//Get the window console handle(isn't the right code but works for these sample
	HWND ConsoleWindow;
	ConsoleWindow=GetForegroundWindow();

	//Getting the desktop hadle and rectangule
	HWND   hwndScreen;
	RECT   rectScreen;
	hwndScreen=GetDesktopWindow ();
	GetWindowRect(hwndScreen,&rectScreen);

	//Set windows size(see the width problem)
	SetWindowPos (ConsoleWindow,NULL,0,0,1000,500, SWP_SHOWWINDOW);

	// Get the current width and height of the console
	RECT rConsole;
	GetWindowRect (ConsoleWindow,&rConsole);
	int Width = rConsole.left = rConsole.right;
	int Height = rConsole.bottom - rConsole.top;

	//caculate the window console to center of the screen
	int ConsolePosX;
	int ConsolePosY;
	ConsolePosX = ((rectScreen.right-rectScreen.left)/2-Width/2 );
	ConsolePosY = ((rectScreen.bottom-rectScreen.top)/2- Height/2 );
	SetWindowPos(ConsoleWindow,NULL,ConsolePosX,ConsolePosY, Width, Height, SWP_SHOWWINDOW || SWP_NOSIZE);


	return 0;
}

#endif // CONSOLE_H_INCLUDED
