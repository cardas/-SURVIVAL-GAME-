#ifndef BUILD_H_INCLUDED
#define BUILD_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>

////////////////////////////////////
void BSHELTER();
void BTORCH();
void BFIRE() ;
void BUILD () ;
void INVENTORY() ;
void SetWindow(int Width, int Height) ;
int Console();
void ClearScreen();
 int  kiekmesa , kiekvaisiai , kiekvanduo , kiekmedena = 0  ;
////////////////////////////////////
bool yradegtukai = false , yrakirvis = false ;
bool SHELTER = false,  FIRE = false , TORCH = false ;
int B ;
////////////////////////////////////

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

////////////////////////////////////
using namespace std ;


void BUILD ()
{
    ClearScreen() ;
Console();
    SetWindow(134, 5) ;



    do {


cout << string( 52, ' ' ) <<  "1) SHELTER " << string( 20, ' ' )  << "6 WOOD \n";
cout << string( 52, ' ' ) <<  "2) BONFIRE " << string( 20, ' ' )  << "3 WOOD \n" ;
cout << string( 52, ' ' ) <<  "3) TORCH " << string( 20, ' ' )  << "2 WOOD \n";
cout << string( 52, ' ' ) <<  "4) BACK "  ;


 int BU ;
    cin >> BU;
      switch (BU) {
    case 1:
    BSHELTER () ;
   break;
   case 2:
  BFIRE() ;
    break ;

   case 3 :
  BTORCH() ;
    break;

   case 4:
B = 987;
   break;

    }
    }while( B !=  987);








}

void BSHELTER()
{
      if ( kiekmedena == 6 || SHELTER == false && kiekmedena > 6 ) {
        SHELTER = true ;
        kiekmedena = kiekmedena - 6 ;
      ClearScreen() ;
        cout << "YOU OWN SHELTER\n" ;
       cin.ignore();
            cin.get();
ClearScreen() ;
      }
      else if (SHELTER == true ) {
            ClearScreen() ;
        cout << "YOU ALREADY HAVE SHELTER\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }
      else if (  kiekmedena < 6 || kiekmedena != 6 ) {
            ClearScreen() ;
        cout << "NEUZTENKA MEDENOS\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }
}
void BFIRE ( )
{


      if ( kiekmedena == 3 || FIRE == false && kiekmedena > 3 ) {
        FIRE = true ;
        kiekmedena = kiekmedena - 3 ;
      ClearScreen() ;
        cout << "YOU OWN BONFIRE\n" ;
       cin.ignore();
            cin.get();
ClearScreen() ;
      }
      else if (FIRE == true ) {
            ClearScreen() ;
        cout << "YOU ALREADY HAVE BONFIRE\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }
       else if (  kiekmedena < 3 || kiekmedena != 3 ) {
            ClearScreen() ;
        cout << "NEUZTENKA MEDENOS\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }

}

void BTORCH ( )
{


      if ( kiekmedena == 2 || TORCH == false && kiekmedena > 2 ) {
        TORCH = true ;
        kiekmedena = kiekmedena - 2 ;
      ClearScreen() ;
        cout << "YOU OWN TORCH\n" ;
       cin.ignore();
            cin.get();
ClearScreen() ;
      }
     else if ( TORCH == true ) {
            ClearScreen() ;
        cout << "YOU ALREADY HAVE TORCH\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }
     else if (  kiekmedena < 2 || kiekmedena != 2 ) {
            ClearScreen() ;
        cout << "NEUZTENKA MEDENOS\n" ;
       cin.ignore();
            cin.get();
            ClearScreen() ;
      }

}

#endif // BUILD_H_INCLUDED
