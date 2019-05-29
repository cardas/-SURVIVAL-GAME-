#ifndef DAYS_H_INCLUDED
#define DAYS_H_INCLUDED
///////////////////////
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

// #include "DIFFICULTY.h"

//////////////////////


void STAMINAGEN ( );
void Rules();
int LOCATION ();
int START ();
int ItemRand (int diff);
int Money (int diff);
int Broken ( int diff ) ;
void DAYEGIPTAS ();
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
void DAYGRENLANDIJA () ;
int DAY ( );
void DAYOTHERS ( ) ;
int LEADERBOARD() ;
int GAMEOVER() ;
/////////////
////////////////////////////////////////////////////////
/////////////

using namespace std;

int Day = 1 ;
int Days = 30 ;
int S = 0;

int DAY ( ) {
 ClearScreen();
Console();
    SetWindow(134, 5);
if (HP == 0 || HP < 0 ) {
ClearScreen() ;
cout << string( 52, ' ' ) <<  "GAME OVER"   << endl ;
cin.ignore();
cin.get() ;
GAMEOVER () ;
}

if (COLD < 0 ) {
    HP = HP - 20;
}



if ( Day < Days ) {


STAMINAGEN ( ) ;

if (STAMINA > 100 ) {
    STAMINA = 100 ;
}

   if (STAMINA <= 100  ) {


if ( loc == 'G' || loc == 'Z' ) {

DAYGRENLANDIJA() ;
 ClearScreen() ;
 Day = Day + 1 ;
 return START();

}
 if ( loc == 'E' || loc == 'V' ) {
    DAYEGIPTAS() ;
    ClearScreen() ;
    STAMINA = STAMINA - 40 ;
    Day = Day + 1 ;
    return START();  }





else if ( loc == 'P' || loc == 'R')  {

    DAYOTHERS();
    ClearScreen();
    Day = Day + 1;
    return START();

}

if (HP == 0 || HP < 0 ) {
ClearScreen() ;
    cout << string( 52, ' ' ) <<  "GAME OVER"   << endl ;
     cin.ignore();
cin.get();
GAMEOVER ();

}}
        }

  else if (Day == Days ) {

    cout << string( 52, ' ' ) <<  "GAME OVER"   << endl ;
 cin.ignore();
cin.get() ;
GAMEOVER ();
}






 }



void DAYGRENLANDIJA () {
int COLDG = 0 ;
COLD = COLD - 30 ;
if ( COLD < 100 || COLD != 100 ) {

if (SHELTER == true  ) {

   while ( COLDG < 15 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1 ;
     COLDG ++ ;
 }

else if (COLD > 100 ){
    COLDG ++ ;
}}
}

if ( FIRE == true ) {
           while ( COLDG < 25 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1;
     COLDG ++ ;
 }

else if (COLD > 100 ){
    COLDG ++ ;
}}
}

if ( TORCH == true ) {

while ( COLDG < 15 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1;
     COLDG ++ ;
 }

else if (COLD > 100 ){
    COLDG ++ ;
}}
}


}

}


void DAYEGIPTAS ()
{


    int STAM = 0 ;
    if ( STAMINA < 100 || STAMINA != 100 ) {
    if ( SHELTER == true ) {

           while ( STAM < 20 ) {
 if ( STAMINA < 100 ) {
   STAMINA ++;
     STAM ++ ;
 }

else if (STAMINA > 100 ){
    STAM = 20; ;
}}
 }

}





}

void DAYOTHERS ( ) {
int DAYOT = 0 ;

    COLD = COLD - 20;
    if ( SHELTER == true ) {
           while ( DAYOT < 10 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1;
     DAYOT ++ ;
 }

else if (COLD > 100 ){
    DAYOT ++ ;
}}
}

if ( FIRE == true ) {
           while ( DAYOT < 15 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1;
     DAYOT  ++ ;
 }

else if (COLD > 100 ){
    DAYOT ++ ;
}}
}

if ( TORCH == true ) {

while ( DAYOT < 5 ) {
 if ( COLD < 100 ) {
   COLD = COLD + 1;
     DAYOT ++ ;
 }

else if (COLD > 100 ){
    DAYOT ++ ;
}}
}



}


void STAMINAGEN ( ) {

if ( STAMINA < 100 || STAMINA != 100 ) {


    if ( STAMINA < 100  ) {
   if (STAMINA < 100 || STAMINA != 100 ) {
   STAMINA = STAMINA + 25;
       if (STAMINA == 100 ) {
        S = S + 50 ;
       }
     S ++ ; }
     if ( STAMINA == 100 || STAMINA == 101 ) {
        S = S + 30 ;
     }

}
 else if ( STAMINA > 100 || STAMINA == 101) {
    STAMINA = 100  ;
 }


 }
S = 0 ;


}
#endif // DAYS_H_INCLUDED
