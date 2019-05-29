#ifndef SHOP_H_INCLUDED
#define SHOP_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
////////////////////////////

#include "Items.h"
#include "StartBox.h"

////////////////////////////
void ClearScreen();
void VALUE ();
void SHOP1 () ;
void ShowItems();
void showChoices();
void SetWindow(int Width, int Height) ;
int Console() ;
void ARMOURWEAPON();
void MATERIALAS();
void MORE();
void EXIT();
void SHOPArmour();

////////////////////////////
#define BLUE 11
///////////////////////
#include "Items.h"
///////////////////////


double sellhead, sellchest, sellboots, sellweapon, sellgloves, sellshield;
int tier ;
///////////////////////

string degtukai = "Degtukai - " ;
string kirvis = "Kirvis - " ;
string mesa = "Mesos yra = " ;
string vaisiai = "vaisiu yra = "  ;
string vandens = "vandens yra = "   ;
string medena = "Medenos yra = "  ;
string shelter = "" ;
string fire = "" ;
string torch = "" ;
string smoney = "" ;
using namespace std ;

void INVENTORY() {

if ( yradegtukai == false )  {
     degtukai = + "DEGTUK -- DON'T Have " ;
}
if ( yradegtukai == true )  {
        degtukai = + "DEGTUKAI -- OWNED " ;

}

if ( yrakirvis == false )  {
     kirvis = + "AXE -- DON'T Have" ;
}
if ( yrakirvis == true )  {
        kirvis = + "KIRVIS -- OWNED " ;

}
if ( SHELTER  == false )  {
     shelter = + "SHELTER--NOT BUILD" ;
}
if (   SHELTER == true )  {
        shelter = + "SHELTER -- BUILT   " ;

}
if ( FIRE  == false )  {
     fire = + "BONFIRE -- NOT BUILD  " ;
}
if (   FIRE == true )  {
        fire = + "BONFIRE -- BUILT      " ;

}
if ( TORCH == false )  {
     torch = + "TORCH -- NOT BUILD " ;
}
if (   TORCH == true )  {
        torch = + "TORCH -- BUILT     " ;

}
if ( money != 0 )  {
     smoney = + "Money=" ;
}





   ClearScreen();
SetWindow(136 ,15) ;

   for ( int i = 0; i < 20 ; i ++)
    {
        cout << string( 20, ' '
                      ) <<  "*" ;
    }
cout << endl ;
       cout << string( 20, ' ' ) <<  shelter << string( 21, ' ' ) <<  degtukai << string( 13, ' ' ) << Whead << head << " TIER " << endl ;
       cout << string( 20, ' ' ) <<  fire << string( 17, ' ' ) << kirvis << string( 17, ' ' ) << Wchest << chest  << " TIER" <<  endl ;
       cout << string( 20, ' ' ) <<  torch << string( 20, ' ' ) << mesa  << kiekmesa << string( 21, ' ' ) << Wweapon << weapon << " TIER" <<  endl ;
       cout << string( 20, ' ' ) <<  smoney << money << string( 31, ' ' ) << vandens << kiekvanduo << string( 19, ' ' ) << Wshield << shield << " TIER" <<  endl ;
       cout << string( 59, ' ' ) << vaisiai << kiekvaisiai << string( 20, ' ' ) << Wgloves << gloves  << " TIER" << endl ;
       cout << string( 59, ' ' ) << medena << kiekmedena << string( 19, ' ' ) << Wboots << boots << " TIER" << endl ;



       for ( int i = 0; i < 20 ; i ++)
    {
        cout << string( 20, ' '
                      ) <<  "*" ;
    }
cin.ignore();
cin.get();
}


void SHOP ()
{
    srand (time(NULL));
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);

int choice ;

    do
    {
        ClearScreen() ;
          Console();
    SetWindow(83,16) ;
        ShowItems();

        cin >> choice ;


        switch (choice)
        {
        case 1:
 VALUE();
break ;

        case 2 :

ARMOURWEAPON();
            break ;

       case 3 :
// MATERIALAS();
MORE();
break ;
       break ;

       case 4:
 EXIT();
        break ;


        }
    }while (choice !=  rand() % 10 + 10 );

}

void ShowItems()
{
    ClearScreen();


    cout << endl ;
    ifstream found("SHOP.txt"); /// SHOP.txt /// SHOP.txt ///SHOP.txt ///SHOP.txt /// SHOP.txt ///SHOP.txt ///SHOP.txt ///SHOP.txt ///SHOP.txt
    string ReadItems ;
    cout << string( 34, '||' ) <<  "MONEY = " << money << "EUR "<< string( 34, '||' ) <<endl ;
    while(!found.eof())
    {
        getline(found,ReadItems);
        cout << ReadItems << endl ;
    }
    found.close();

}

void ARMOURWEAPON  ()
{
    ClearScreen();



    int AR;
      do  {
ClearScreen() ;


            cout << endl ;
    ifstream found("SHOPArmourWeapon.txt"); /// SHOPArmourWeapon.txt /// SHOPArmourWeapon.txt ///SHOPArmourWeapon.txt ///SHOPArmourWeapon.txt
    string ReadItems ;
    cout << string( 34, '||' ) <<  "MONEY = " << money << "EUR "<< string( 34, '||' ) <<endl ;

    while(!found.eof())
    {
        getline(found,ReadItems);
        cout << ReadItems << endl ;
    }
    found.close();



cin >> AR;
ClearScreen() ;
      switch (AR) {
   case 1:
VALUE () ;
 break;
   case 2:

         tier = 1 ;
SHOPArmour() ;
    break ;
   case 3 :
       ClearScreen();
        tier = 2 ;
SHOPArmour() ;
    break;
   case 4 :
          ClearScreen();
         tier = 3 ;
SHOPArmour() ;

    break ;
   case 5:
AR = 987;
   break;

    } }while( AR !=  987);


}






 /*void MATERIALAS  ()
{
    ClearScreen();

    cout << endl ;
    ifstream found("SHOPMATERIALAS.txt"); /// SHOPMATERIALAS.txt /// SHOPMATERIALAS.txt/// SHOPMATERIALAS.txt ///SHOPMATERIALAS.txt
    string ReadItems ;
    while(!found.eof())
    {
        getline(found,ReadItems);
        cout << ReadItems << endl ;
    }
    found.close();

     int MA;
      do  {

cin >> MA;

      switch (MA) {
   case 1:
VALUE() ;
 break;
   case 2:
        tier = 1 ;


    break ;

   case 3 :

   tier = 2 ;
    break;
   case 4 :

tier = 3 ;
    break ;
   case 5:
     MA = 986 ;
    break;
    }

      }while( MA != 986 );

}
*/
void MORE ()
{
 int MO;
      do  {

         ClearScreen();

    cout << endl ;
    ifstream found("SHOPMORE.txt"); /// SHOPMORE.txt ///SHOPMORE.txt /// SHOPMORE.txt" /// SHOPMORE.txt" ///SHOPMORE.txt"
    string ReadItems ;
    cout << string( 34, '||' ) <<  "MONEY = " << money << "EUR "<< string( 34, '||' ) <<endl ;
    while(!found.eof())
    {
        getline(found,ReadItems);
        cout << ReadItems << endl ;
    }
    found.close();




cin >> MO;

      switch (MO) {
   case 1:
 VALUE() ;
 break;
   case 6:
       ClearScreen();
       if ( yradegtukai == true )
 {

     cout <<  string( 10, ' ' ) << " YOU ALREADY HAVE THAT" ;
     cin.ignore();
cin.get();

      break ;
 }
cout <<  string( 10, ' ' ) <<  "ARE YOU SURE YOU WANT BUY THAT?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
if (yradegtukai == false ) {
     money = money - 3 ;
      if (  money >= 0  ) {
    yradegtukai = true  ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 3;
 cin.ignore();
cin.get(); }
} }

    break ;

   case 7 :
       ClearScreen();
 if ( yrakirvis == true )
 {


    cout <<  string( 10, ' ' ) << " YOU ALREADY HAVE THAT" ;
     cin.ignore();
cin.get();

      break ;
 }
cout <<  string( 10, ' ' ) <<  "ARE YOU SURE YOU WANT BUY THAT?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;

cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
if (yrakirvis == false ) {
     money = money - 5 ;
      if (  money >= 0  ) {
    yrakirvis = true  ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 5;
 cin.ignore();
cin.get(); }
} }

    break;
   case 3 :
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE  " << kiekvanduo << "  ARE YOU SURE YOU WANT BUY MORE?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;

cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3 ;
  if (  money >= 0  ) {
    kiekvanduo= kiekvanduo + 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
    break ;
   case 4 :
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << kiekmesa << "  ARE YOU SURE YOU WANT BUY MORE?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;

cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3 ;
  if (  money >= 0  ) {
    kiekmesa = kiekmesa + 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
    break;

   case 5:
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE  " << kiekvaisiai << "  ARE YOU SURE YOU WANT BUY MORE?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;

cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 2 ;
  if (  money >= 0  ) {
    kiekvaisiai = kiekvaisiai + 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 2;
 cin.ignore();
cin.get(); }
}
   case 2:
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE  " << kiekmedena << "  ARE YOU SURE YOU WANT BUY MORE?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;

cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 2 ;
  if (  money >= 0  ) {
    kiekmedena = kiekmedena  + 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 2;
 cin.ignore();
cin.get(); }
}

    break;
   case 8:
    MO = 985 ;
    break ;
    }

      }while( MO != 985 );
}


void EXIT () {

START ( ) ;

}

void SHOPArmour() {



 ClearScreen();


     int WITEMs;
      do  {



 ClearScreen() ;
 cout << endl ;
    ifstream found("SHOPArmour.txt");       ///SHOPArmour.txt  /// SHOPArmour.txt ///SHOPArmour.txt /// SHOPArmour.txt /// SHOPArmour.txt
    string ReadItems ;
    cout << string( 34, '||' ) <<  "MONEY = " << money << "EUR "<< string( 34, '||' ) <<endl ;
    while(!found.eof())
    {
        getline(found,ReadItems);
        cout << ReadItems << endl ;
    }
    found.close();


cin >> WITEMs;

      switch (WITEMs) {
   case 1:
       ClearScreen() ;
VALUE() ;
 break;
   case 2:
        ClearScreen() ;
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << head <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    head = 1 ;
    break ;

    }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << head <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
    head = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << head <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    head = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}

    break ;

   case 3 :
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << chest <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    chest = 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << chest <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
    chest = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << chest <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    chest = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}
    break;
    case 4 :
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << boots <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    boots = 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << boots <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
     boots = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << boots <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    boots = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}
    break;
   case 5 :
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << weapon <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    weapon = 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << weapon <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
    weapon = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << weapon <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    weapon = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}
    break;
     case 6 :
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << shield <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    shield = 1 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << shield <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
    shield = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << shield  <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    shield = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}
    break;
     case 7 :
if ( tier == 1 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << gloves <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 1;
  if (  money >= 0  ) {
    gloves = 1 ;
        break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
 money = money + 1;
 cin.ignore();
cin.get(); }
}

}




if ( tier == 2 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << gloves <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 3;
  if (  money >= 0  ) {
    gloves  = 2 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 3;
 cin.ignore();
cin.get(); }
}
}
if ( tier == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " YOU HAVE " << gloves  <<  " TIER " << "ARE YOU SURE YOU WANT BUY " << tier  << " TIER ?\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    break ;
}
else if (YesNo=='Y' || YesNo == 'y') {
  money = money - 5;
  if (  money >= 0  ) {
    gloves  = 3 ;
    break ; }

else if ( money < 0 ) {  cout << " NEUZTENKA PINIGU \n" ;
  money = money + 5;
 cin.ignore();
cin.get(); }
}

}
    break;
     case 8 :
 WITEMs = 986;
    break;
    } }while( WITEMs != 986 );


}





/*
void Sell(int diff)
{
    if ( diff == 1 )
    {
        cout << "YOU'RE HAVE PERMISSION TO SELL : " << endl ;
        cout << " ";

    }
    if ( diff == 2 )
    {


    }

    if ( diff == 3 )
    {


    }
} */

void VALUE () {
    ClearScreen();

    SetWindow(83,4);
cout << string( 30, ' ' ) <<  "VALUE " << money <<" Eur" << "\n" ;
 cout <<  string( 30, ' ' ) << "PRESS ANYKEY TO EXIT from HOW TO PLAY?.\n";
            cin.ignore();
            cin.get();
             Console();
             SetWindow(83,15);
            ClearScreen();
}





#endif // SHOP_H_INCLUDED
