#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;


#define LIGHTGREEN 10
#define VERYBLUE 15


char getChar() {
    int x = rand() % 4;
    switch (x) {
        case 0: return (char)(48 + rand() % 10);
        case 1: return (char)(97 + rand() % 26);
        case 2: return 32;
        default: return (char)(65 + rand() % 26);
    }
}

int Matrix ()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int ret;
    /* get the width of the console */
    ret = GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&csbi);
    int width = 10;
    if(ret)
    {
        width = csbi.dwSize.X;
    }
    for (int i = 0 ; i < 33 ; i++) {
        for (int i = 0; i < width; i ++) {
            /* set text color */
            if (rand() & 1) {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), VERYBLUE );
            }

            else {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTGREEN);
            }
            cout << getChar(); // print a digit, uppercase or lowercase
        }
        // usleep(10);

    }
 return 0;
}

#endif // MATRIX_H_INCLUDED
