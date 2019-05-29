#ifndef ITEMS_H_INCLUDED
#define ITEMS_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>


////////////////////////////////
#include "DIFFICULTY.h"
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




int ItemRand() ;
int Money ( int diff ) ;
int Broken ( int diff ) ;
int Stats ( int diff ) ;
int Inventory ( int diff ) ;

////////////////////////////////
void USING ();
void DRINK ();
void MEAT ();
void FRUIT();
////////////////////////////////
using namespace std;

////////////////////////////////
//int head, chest, boots, weapon, shield, gloves, money;
//int HP, STAMINA, COLD;
//double bhead, bchest, bboots, bweapon, bgloves, bshield;
//int MyItem [] = {head, chest, boots, weapon, shield, gloves};
//int MyBItem [] = {bhead, bchest, bboots, bweapon, bshield, bgloves};
//int bitem [ ] = {bhead, bchest, bboots, bweapon, bgloves, bshield } ;
// int  kiekmesa , kiekvaisiai , kiekvanduo , kiekmedena = 0  ;


////////////////////////////////////////////
#include "Shop.h"

////////////////////////////////////////////
string Whead = "HEAD - " ;
string Wchest = "CHEST - " ;
string Wboots = "BOOTS - " ;
string Wweapon = "WEAPON - " ;
string Wshield = "SHIELD - " ;
string Wgloves = "GLOVES - " ;



int Inventory ( int diff ) {
    srand (time(NULL));
if (diff == 1)
    {
        kiekmesa = rand() % 2 + 2; // 2 or 3 TIER
        kiekvanduo = rand() % 2 + 2;

    }


    if ( diff == 2 )
    {
       kiekmesa = rand() % 2 + 1; // 2 or 3 TIER
        kiekvanduo = rand() % 2 + 1;

    }
    if ( diff == 3 )
    {
          kiekmesa = rand() % 1 + 1; // 2 or 3 TIER
        kiekvanduo = rand() % 1 + 1;

    }




}



int ItemRand ( int diff  )
{
    srand (time(NULL));
    if (diff == 1)
    {
        head = rand() % 2 + 2; // 2 or 3 TIER
        boots = rand() % 2 + 2;
        chest = rand() % 2 + 2;
        gloves = rand() % 2 + 2;
        weapon = rand() % 2 + 2;
        shield = rand() % 2 + 2;
    }


    if ( diff == 2 )
    {
        head = rand() % 2 + 1 ; // 1 to 2 ... TIER
        boots = rand() % 2 + 1 ;
        chest = rand() % 2 + 1;
        gloves = rand() % 2 + 1;
        weapon = 0;
        shield = rand() % 2 + 1;
    }
    if ( diff == 3 )
    {
        head = rand() % 1 + 1 ;
        boots = rand() % 1 + 1 ;
        chest = rand() % 1 + 1;
        gloves = rand() % 1 + 1;
        weapon = 0;
        shield = rand() % 1 + 1;
    }


}

int Money ( int diff )
{
srand (time(NULL));
    if ( diff == 1 )
    {
        money = rand() % 25 + 10; ;
    }
    if ( diff == 2 )
    {
        money = rand() % 15 + 8; ;
    }
    if ( diff == 3 )
    {
        money = rand() % 8 + 6; ;
    }
}

/*
int Broken ( int diff )
{
    srand (time(NULL));
    if ( diff == 1  )
    {
        bhead = 0.5;
        bboots = 0.5;
        bchest = 0.5;
        bgloves = 0.5;
        bweapon = 0.5;
        bshield = 0.5;
    }
    if ( diff == 2 )
    {
        bhead = 0.35;
        bboots = 0.35;
        bchest = 0.35;
        bgloves = 0.35;
        bweapon = 0.35;
        bshield = 0.35;
    }

    if  ( diff == 3 )
    {
        bhead = 0.20;
        bboots = 0.20;
        bchest = 0.20;
        bgloves = 0.20;
        bweapon = 0.20;
        bshield = 0.20;
    }





}*/
int Stats ( int diff )
{
    if ( diff == 1 )
    {
        HP = 100;
        STAMINA = 100;
        COLD = 100;
    }
    if ( diff == 2 )
    {
        HP = 75;
        STAMINA = 75;
        COLD = 75;
    }
    if ( diff == 3 )
    {
        HP = 50 ;
        STAMINA  = 50 ;
        COLD = 50  ;
    }
}

void USING () {

     ClearScreen() ;
Console();
    SetWindow(134, 5);




int ITE ;
do {


cout << string( 52, ' ' ) <<  "1) DRINK WATER \n"  ;
cout << string( 52, ' ' ) <<  "2) EAT MEAT \n"  ;
cout << string( 52, ' ' ) <<  "3) EAT FRUIT\n"  ;
cout << string( 52, ' ' ) <<  "4) BACK \n"  ;


    cin >> ITE;
      switch (ITE) {
    case 1:
  DRINK() ;
   break;
   case 2:
MEAT () ;
    break ;
   case 3 :
FRUIT() ;
    break;


    } }while( ITE !=  4);


}

void DRINK ( ) {
ClearScreen() ;
int KIEKUSE = 0 ;
int STAMI = 0 ;
     if ( kiekvanduo > 0 ){



    while ( STAMI < 20 ) {
 if ( STAMINA < 100 ) {
   STAMINA = STAMINA + 1 ;
     STAMI ++ ;
 }

else if (STAMINA > 100 || STAMINA == 100){
    STAMI = 99;
}}


    for ( int i = 0 ; i < 5 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "PRESS ENTER TO DRINK " << endl ;
            cout <<  string( 52, ' ' ) << "DRINKED " << KIEKUSE  << " %" << endl ;
            KIEKUSE  = KIEKUSE + 25 ;

            cin.ignore();
            cin.get();
          }
            kiekvanduo = kiekvanduo - 1 ;
          ClearScreen() ;
          KIEKUSE = 0 ;
     }
     else if (kiekvanduo == 0 || kiekvanduo < 0 ) {

        cout <<  string( 52, ' ' ) << "YOU DON'T HAVE WATER" << endl ;
        cin.ignore();
            cin.get();
     ClearScreen();
     }



 }


 void MEAT () {
ClearScreen() ;
int KIEKUSE = 0 ;
int BONUSHP = 0 ;
int STAM = 0 ;
     if ( kiekmesa > 0 ){



while ( BONUSHP < 30 ) {
 if ( HP < 100 ) {
   HP = HP + 1 ;
     BONUSHP ++ ;
 }
 else if (  HP  > 100 ||  HP == 100){
    BONUSHP = 99;
}}


  while ( STAM < 20 ) {
 if ( STAMINA < 100 ) {
   STAMINA = STAMINA + 1 ;
     STAM ++ ;
 }

else if (STAMINA > 100 || STAMINA == 100){
    STAM = 99;
}}
    for ( int i = 0 ; i < 5 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "PRESS ENTER TO EAT " << endl ;
            cout <<  string( 52, ' ' ) << "DRINKED " << KIEKUSE  << " %" << endl ;
            KIEKUSE  = KIEKUSE + 25 ;

            cin.ignore();
            cin.get();
          }
             kiekmesa = kiekmesa - 1 ;
          ClearScreen() ;
          KIEKUSE = 0 ;
     }
     else if (kiekmesa == 0 || kiekmesa < 0 ) {

        cout <<  string( 52, ' ' ) << "YOU DON'T HAVE MEAT" << endl ;
        cin.ignore();
            cin.get();
     ClearScreen();
     }
 }

 void FRUIT() {
 ClearScreen() ;
int KIEKUSE = 0 ;
int BONUSHP = 0 ;
int STAMI = 0 ;
     if ( kiekvaisiai > 0 ){



    while ( BONUSHP < 20 ) {
 if ( HP < 100 ) {
   HP = HP + 1 ;
     BONUSHP ++ ;
 }

else if (HP  > 100 || HP == 100){
    BONUSHP = 99;
}}
  while ( STAMI < 15 ) {
 if ( STAMINA < 100 ) {
   STAMINA = STAMINA + 1 ;
     STAMI ++ ;
 }

else if (STAMINA > 100 || STAMINA == 100){
    STAMI = 99;
}}


    for ( int i = 0 ; i < 5 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "PRESS ENTER TO EAT FRUIT " << endl ;
            cout <<  string( 52, ' ' ) << "DRINKED " << KIEKUSE  << " %" << endl ;
            KIEKUSE  = KIEKUSE + 25 ;

            cin.ignore();
            cin.get();
          }
          kiekvaisiai = kiekvaisiai - 1 ;
          ClearScreen() ;
          KIEKUSE = 0 ;
     }
     else if (kiekvaisiai == 0 || kiekvaisiai < 0 ) {

        cout <<  string( 52, ' ' ) << "YOU DON'T HAVE FRUIT" << endl ;
        cin.ignore();
            cin.get();
     ClearScreen();
     }

 }


#endif // ITEMS_H_INCLUDED
