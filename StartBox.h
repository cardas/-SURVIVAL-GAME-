#ifndef STARTBOX_H_INCLUDED
#define STARTBOX_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
///////////////////////
#define BLUE 9
///////////////////////
 int Matrix();
  int Console();
//////////////////////////
void showChoices();
void SHOP();
void INVENTORY();
int ACHIEVEMENT() ;
int DAY() ;
void USING() ;
 int ADVANCE();
int LEADERBOARD()  ;
//////////////////////////
#include "Shop.h"
#include "DAYS.h"
#include "Welcomer.h"
#include "Location.h"
#include "Items.h"
#include "Rules.h"
#include "Console.h"
#include "StartBox.h"
#include "Matrix.h"
#include "Shop.h"
#include "BUILD.h"
#include "CHALLENGE.h"
#include "LEADERBOARD.h"
//////////////////////////


int choice ;



int START ( )
{

    do
    {
        showChoices();

        cin >> choice;

        switch (choice)
        {
        case 1:
       SHOP();

            break ;
        case 6 :
INVENTORY() ;
            break ;

            case 3 :
BUILD() ;
            break ;
            case 4 :
Challenge() ;
            break ;
            case 5:
  DAY();
            break ;
            case 2 :
USING() ;
            break ;
            case 7:



 ADVANCE();

            break ;
}
}while (choice != 912);

 }



    void showChoices ()
    {
 Matrix() ;

cout << "\n\n\n\n\n\n\n" ;
        ClearScreen();
           Console() ;


 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);


         for ( int i = 0; i < 30; i ++)
        {
            cout << string( 20, ' ' ) <<  "*" ; // 30
        }
        cout << endl ;
        cout << string( 52, ' ' ) << Wlocation ;
        if ( WSeason != "" )
        {
            cout << string( 52, ' ' ) << WSeason ;
        }

        cout << " " << string( 45, ' ' ) <<"-HP " << HP << " : " ;
        cout << "STAMINA " << STAMINA << " : " ;
        cout << "COLD " << COLD << "-" << string( 24, ' ' ) << "\n" ;
        cout <<  string( 45, ' ' ) << "-ACHIEVEMENT " << PresentAchievement << " : "  ;
        cout << "VALUE " << money <<" Eur-" << string( 24, ' ' ) << "\n" ;
        cout <<  string( 136, '-' ) << "\n" ;
          cout <<  string( 55, ' ' ) << "DAY --" << Day << "--\n" ;
        cout <<  string( 136, '-' ) << "\n" ;
        cout << string( 52, ' ' ) << "CHOICE:. "<< endl ;
        cout << string( 52, ' ' ) << "1)SHOP" << endl ;
        cout <<  string( 52, ' ' ) << "2)USE ITEM" << endl ;
        cout <<  string( 52, ' ' ) << "3)BUILD" << endl ;
        cout <<  string( 52, ' ' ) << "4)CHALLENGE" << endl ;
         cout <<  string( 52, ' ' ) << "5)NEXT DAY" << endl ;
          cout <<  string( 52, ' ' ) << "6)INVENTORY" << endl ;
        cout <<  string( 52, ' ' ) << "7)ADDITION" << endl ;


        for ( int i = 0; i < 30 ; i ++) // 40
        {
            cout << string( 20, ' ' ) <<  "*" ; // 30
        }
        cout << endl ;


    }

#endif // STARTBOX_H_INCLUDED
