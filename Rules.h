#ifndef RULES_H_INCLUDED
#define RULES_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
///////////////////////////////
#define MAGENTA 10

////////////////////////////////
void ClearScreen();

void PRIVACY();
void History ();
void HistoryEnd () ;
void SetWindow(int Width, int Height) ;
void HOWto () ;
////////////////////////////////
void Rules ()
{
   Console();
    SetWindow(134, 19 ) ;
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), MAGENTA);

     for ( int i = 0; i < 30 ; i ++)
    {
        cout << string( 20, ' '
                        ) <<  "*" ;
    }
    cout << endl ;

    cout << "\n" <<string( 52, ' ' ) << " ***SurVival GAME*** \n\n" ;
    cout << string( 52, ' ' ) << "1)HOW TO PLAY?" << endl ;
    cout << string( 52, ' ' ) << "2)HISTORY" << endl ;
    cout << string( 52, ' ' ) << "3)Impossible End"<< endl;
    cout << string( 52, ' ' ) << "4)PRIVACY POLICY" << endl;
    cout << string( 52, ' ' ) << "5)I AGREE CONTINUE\n" << endl ;
     for ( int i = 0; i < 30 ; i ++)
    {
        cout << string( 20, ' '
                        ) <<  "*" ;
    }
    int r ;
    cin >> r ;
    ClearScreen();
    int i = 0;
    do
    {
        if (r == 1 )
        {
            HOWto ();
            cout <<  string( 30, ' ' ) << "PRESS ANYKEY TO EXIT from HOW TO PLAY?.\n";
            cin.ignore();
            cin.get();
            ClearScreen();
            return Rules();
        }
        if (r == 2 )
        {

            History ();
            cout <<  string( 30, ' ' ) << "PRESS ANYKEY TO EXIT from HISTORY.\n";
            cin.ignore();
            cin.get();
            Console();
            SetWindow(120,30);
            ClearScreen();
            return Rules() ;
        }
        if (r == 3 ) {

            HistoryEnd ();
             cout << string( 30, ' ' ) <<  "PRESS ANYKEY TO EXIT from IMPOSSIBLE END.\n";
            cin.ignore();
            cin.get();
            Console();
            SetWindow(120,30);
            ClearScreen();
            return Rules();
        }
        if ( r == 4 )
        {
            PRIVACY();
            cout <<   string( 30, ' ' ) << "PRESS ANYKEY TO EXIT from PRIVACY.\n";
            cin.ignore();
            cin.get();
            ClearScreen();
             Console();
            SetWindow(120,30);

            return Rules();
        }
        if ( r == 5 )
        {
            ClearScreen();
            i ++ ;
        }
    }
    while (i != 1 );
}

void PRIVACY ()
{
ClearScreen();
Console();
SetWindow(120,23);

  for ( int i = 0; i < 100; i ++)
    {
        cout << string( 10, ' '
                        ) <<  "*" ;
    }
    cout << "\n\n";
    cout << string( 40, '*' ) << " I AGREE THAT :  " << string( 60, '*' ) << endl ;
    cout << string( 40, '*' ) << " +We will retain your information as needed to."<< string( 30, '*' )<< endl   ;
    cout << string( 40, '*' ) << " +After game end, we will collect your experience " << string( 27, '*' )<< endl ;
    cout << string( 40, '*' ) << " +I'm 18 and older " << string( 58, '*' ) << endl ;
 for ( int i = 0; i < 50; i ++)
    {
        cout << string( 10, ' '
                        ) <<  "*" ;
    }
cout << endl ;
}

void History ()
{

    ClearScreen();
Console();
SetWindow(120,35);


    ifstream found("ISTORIJA.txt"); /// ISTORIJA.txt ///ISTORIJA.txt ///ISTORIJA.txt ///ISTORIJA.txt ///ISTORIJA.txt ///ISTORIJA.txt
    string ReadHistory ;
    while(!found.eof())
    {
        cout << string( 1, '*') ;
        getline(found,ReadHistory);
        cout << string( 20, ' ' ) << ReadHistory   <<  endl ;
    }
    found.close();

cout << endl ;

}

void HOWto ()
{

    ClearScreen();
Console();
SetWindow(120,35);


    ifstream found("HOWTOPLAY.txt"); /// HOWTOPLAY.txt ///HOWTOPLAY.txt ///HOWTOPLAY.txt
    string ReadHistory ;
    while(!found.eof())
    {
        cout << string( 1, '*') ;
        getline(found,ReadHistory);
        cout << string( 20, ' ' ) << ReadHistory   <<  endl ;
    }
    found.close();

cout << endl ;

}

void HistoryEnd () {
    ClearScreen();
     Console();
    SetWindow(120,35);

       for ( int i = 0; i < 60 ; i ++)
    {
        cout << string( 20, ' '
                        ) <<  "*" ;
    }

cout << endl ;
ifstream found("ISTORIJOSP.txt");
string ReadPHistory ;

    cout << endl ;
while (!found.eof())
{
    getline(found,ReadPHistory);
    cout << string( 30, ' ' ) << ReadPHistory << endl;
}
cout << endl ;

found.close();
}


#endif // RULES_H_INCLUDED
