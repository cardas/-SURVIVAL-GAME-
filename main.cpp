#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h> // Console Size Changer

///////////////////////
#include "Shop.h"
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
#include "DIFFICULTY.h"
#include "DAYS.h"
#include "LEADERBOARD.h"

// #include "DIFFICULTY.h"

//////////////////////



void Rules();

int LOCATION ();
int START ();
int ItemRand (int diff);
int Money (int diff);
int Broken ( int diff ) ;

void ClearScreen();
void SHOP() ;
void SHOP2() ;
void Sell(int diff);
void SetWindow(int Width, int Height) ;
void Wloc ( ) ;
int Console () ;
void SHOP () ;
int DIFFICULTY() ;
int WELCOME () ;
int ACHIEVEMENT ( );
void Challenge();
int GAMEOVER ();

/////////////
////////////////////////////////////////////////////////
/////////////

using namespace std;

int player ;




int main()
{






    /// RULES && AGREEMENT
    Rules ();

    ClearScreen();

    /// WELCOME

    Console();
    WELCOME();

    /// DIFFICULTY SELECT


    DIFFICULTY ( );



    /// LOCATION GENERATOR

    Wloc () ; // Choice
    LOCATION() ; // Randomizer


    /// ACHIEVEMENT

  ACHIEVEMENT() ;


///ITEMS LVL RANDOM  ...
Inventory ( diff ) ;
ItemRand ( diff );
 Money ( diff );
// Broken (diff );
 Stats ( diff );

   /* int HowManyI;
    HowManyI =  (sizeof(MyItem)/sizeof(*MyItem));
    for ( int i = 0 ; i < HowManyI ; i++ )
    {


    } */



/// CLEAR CONSOLE

    ClearScreen();

/// START GAME

    START () ;


    /// SHOPASvoid BSHELTER


    /*    ClearScreen();
        SHOP();
*/






    return 0;

}

///
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///















void SetWindow(int Width, int Height)
{
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleScreenBufferSize(Handle, coord);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);
}

void ClearScreen()
{
    cout << string( 100, '\n' );
}


int GAMEOVER () {

int iha = 0 ;
int iha2 ;


    int SCORE[100];
    int scor ;
       /* fstream fsg;
  fsg.open ("SCORE.html", fstream::in  | fstream::app);

  fsg << KIEKHARD << endl ;
    fsg.close();


 ifstream scores("SCORE.html") ;
    if (scores.is_open()) {


        while(!scores.eof())
    {
        scores >> scor ;
        SCORE[iha] = scor;
        iha ++;
    }
    iha -- ;
    scores.close() ;
    }

    for (int i = 0 ; i < iha ; i ++ ) {
    cout << SCORE [i] << " ";

} */

 /// HIGHER
   int highNum = 0;
int m;
int kurishigh = 0 ;
     for (m = 0 ; m < iha ; m++);
    {
        if (SCORE[m] > highNum)
            highNum = SCORE[m];
           kurishigh = m ;
    }
cout << highNum;
cout << endl;



    cin.ignore();
cin.get() ;

    /*

    iha = iha2 ;

//////////////////////////
//////////////////////////

//////////////////////////
//////////////////////
for (int i = 0 ; i < iha ; i ++ ) {
    cout << SCORE [i] << " ";

}
cout << endl;
for (int i = 0 ; i < iha ; i ++ ) {

     cout << "IHA = " <<  iha  << " " ;
}
cin.ignore();
cin.get() ;
  */

       /*fstream fs;
  fs.open ("LEADERBOARDD.html", fstream::in  | fstream::app);

  fs << string( 10, ' ' ) << PlayerNAME <<  string( 10, ' ' ) <<  KIEKHARD << string( 10, ' ' ) << PresentAchievement << endl ;

  fs.close();

*/
    DebugBreak();


}




