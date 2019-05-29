#ifndef DIFFICULTY_H_INCLUDED
#define DIFFICULTY_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>

///////////////////////////////

 int DIFFICULTY() ;
int Console();
void ClearScreen();

///////////////////////////////


///////////////////////////////
using namespace std ;

int diff;
int DIFFICULTY()
{

    cout <<  string( 45, ' ' ) << " ::::CHOICE DIFFICULTY:::: \n" << endl ;
    cout <<  string( 45, ' ' ) << ":::: 1)EASY" << endl ;
    cout << string( 45, ' ' ) <<  ":::::::: 2)MEDIUM" << endl ;
    cout << string( 45, ' ' ) <<  ":::::::::::: 3)HARD " << endl ;

      for ( int i = 0; i < 40 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*";
        }
            cin >> diff ;
    while ( diff < 0 || diff > 3)
    {
        ClearScreen();
        cout << " PASIRINKIMAS NUO 1 IKI 3 ! " << endl ;
        Console();
        DIFFICULTY();
        cin >> diff;
    }

}


#endif // DIFFICULTY_H_INCLUDED
