#ifndef CHALLENGE_H_INCLUDED
#define CHALLENGE_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
///////////////////////////////////


int WinBonus;
int HPENEMY ;


///////////////////////////////////
void Challenge();
void SAFEHUNTING() ;
void DANGERHUNTING();
void MediumEnemy() ;
void EasyEnemy() ;
void CAMPAING();
void HardEnenmy();
int GAMEOVER () ;
void VILKAS ();
void DIDELISVILKAS ();
void MAZASLOKIS();
void DIDELISLOKIS();
void DRAKONAS();
void MISKODVASIA();
void MAFIA1() ;
void BOSSMAFIA2() ;
void BOSSMAFIA1() ;
string PresentAchievement = "" ;
string achievement[8] = "" ;
int ach ;
bool VILK = false , DIDELISVIL = false , MAZASLOK = false;
bool DIDELISLOK = false , DRAKONS = false , MISKODVA = false;
bool MAFIA = false , BOSSMAFIA = false ;
///////////////////////////////////
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

///////////////////////////////////
int HP, STAMINA, COLD;
int head, chest, boots, weapon, shield, gloves, money;
int KIEKEASY = 0 , KIEKHARD = 0 ;
///////////////////////////////////
int ACHIEVEMENT ( );



using namespace std;

void Challenge() {


 ClearScreen() ;
Console();

    SetWindow(134, 6) ;


    do {



cout << string( 52, ' ' ) <<  "1) SAFE HUNTING \n"  ;
cout << string( 52, ' ' ) <<  "2) DANGER HUNTING\n " ;
cout << string( 52, ' ' ) <<  "3) CAMPAING \n" ;
cout << string( 52, ' ' ) <<  "4) BACK \n" ;


 int BU ;
    cin >> BU;
      switch (BU) {
    case 1:
  SAFEHUNTING();
  KIEKEASY ++ ;
   break;
   case 2:

DANGERHUNTING();

    break ;
   case 3 :
CAMPAING();
    break;

   case 4:
B = 987;
   break;

    } }while( B !=  987);

}


void SAFEHUNTING() {
srand (time(NULL));
int S;

 S = rand() % 2 + 1 ;
if ( S == 1 ) {
    EasyEnemy() ;
}
 if(S == 2 ) {
    MediumEnemy();
 }

}
void EasyEnemy() {

if ( STAMINA < 30 ) {
         ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA ! " << endl ;
    cin.ignore();
            cin.get();
  return Challenge() ;
}
 ClearScreen() ;
 for ( int i = 0 ; i < 9999 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING" << endl ;
          }

if ( weapon == 1 || weapon == 2 || weapon == 3 ) {
money = money + 3 ;
 ClearScreen() ;

        cout << "VICTORY\n" ;
        cout << "YOU WON 3 EUR \n" ;
        KIEKHARD ++ ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
            return Challenge() ;

              }

            else
                ClearScreen() ;
        cout << "DEFEAT\n" ;
          money = money - 3;
          HP = HP - 30 ;
          STAMINA = STAMINA - 30 ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
              return Challenge() ;
}

void MediumEnemy() {
if (  STAMINA < 30 ) {
         ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA ! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;
}
 for ( int i = 0 ; i < 9999 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING" << endl ;
          }

if ( weapon == 2 || weapon == 3 ) {
money = money + 5 ;
 ClearScreen() ;

        cout << "VICTORY\n" ;
        cout << "YOU WON 5 EUR \n" ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
            KIEKHARD ++ ;
            return Challenge() ;
            }
            else
                ClearScreen() ;
        cout << "DEFEAT\n" ;
        money = money - 5 ;
        HP = HP - 40 ;
        STAMINA = STAMINA - 30 ;
       cin.ignore();
            cin.get();
            ClearScreen();
             return Challenge() ;
}

void HardEnenmy() {
    if (  STAMINA < 30 ) {
         ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA ! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;
}
 for ( int i = 0 ; i < 9999 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING" << endl ;
          }
if ( weapon == 3 ) {
money = money + 7 ;
  ClearScreen() ;
        cout << "VICTORY\n" ;
        cout << "YOU WON 7 EUR \n" ;
        KIEKHARD ++ ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
            return Challenge() ;
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT\n" ;
        money = money - 7 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30 ;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;


}


void DANGERHUNTING()  {

srand (time(NULL));
int S;

 S = rand() % 2 + 1 ;
if ( S == 1 ) {
    MediumEnemy();
}
 if(S == 2 ) {
    HardEnenmy();

 }

}



void CAMPAING() {

/*VILK = true ;
DIDELISVIL = true  ;
MAZASLOK = true ;
DIDELISLOK = true ;
DRAKONS = true ;
MISKODVA = true ;
chest = 3 ;
head = 3 ;
gloves = 3 ;
weapon = 3 ;
boots = 3 ;
shield = 3 ; */

if (VILK == false ) {
    VILKAS() ;

 }

  else if (DIDELISVIL == false ) {
    DIDELISVILKAS();


}

else if (MAZASLOK == false ) {
    MAZASLOKIS();

}
else if (DIDELISLOK == false ) {
    DIDELISLOKIS();

}
else if ( DRAKONS == false )
{
    DRAKONAS();

}
else if ( MISKODVA == false )
{
    MISKODVASIA();

}
if ( MISKODVA == true ) {

    ClearScreen() ;
    cout <<  string( 45, ' ' ) << " CONGRATS ! YOU SURVIVED ! \n" << endl ;
    cout <<  string( 45, ' ' ) << " ::::CHOICE END:::: \n" << endl ;
    cout <<  string( 45, ' ' ) << " 1)::::BACK TO MY FAMILY:::: \n" << endl ;
    cout <<  string( 45, ' ' ) << " 2)::::HELP FIND FAMILY FOR :::: \n" << endl ;
 int choicess ;
    cin >> choicess;
    if ( choicess == 1  ) {
   ClearScreen() ;
        int ka ;
   cout <<  string( 45, ' ' ) << "1)STAY ALONE(END GAME) \n" << endl ;
   cout <<  string( 45, ' ' ) << "2)RETURN TO FAMILY \n" << endl ;
           cin >> ka ;
        if ( ka == 1 ) {
            GAMEOVER();
        }
        if ( ka == 2) {
         MAFIA1() ;
         if ( MAFIA == false ) {
              ClearScreen() ;
        cout << "DEFEAT PRESS MAFIA  ! \n" ;
        cout << "THANK YOU FOR YOU GAME \n" ;
      cin.ignore();
            cin.get();
        HP = HP - 999999 ;
        GAMEOVER() ;
         }
        else if (MAFIA == true ) {
         BOSSMAFIA1(); }

        }
     else { CAMPAING() ; }

    }
    if (choicess == 2 ) {

  MAFIA1() ;
 if (MAFIA == true ) {
         BOSSMAFIA2(); }

    }

    else  { CAMPAING() ; }

}







}

void VILKAS () {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH WOLF! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH WOLF !!!!!!" << endl ;
          }
if ( weapon >= 1 && head >= 1 && chest >= 1  && boots >= 1  &&  shield >= 1 &&  gloves >= 1 ){
money = money + 8 ;
  ClearScreen() ;
        cout << "VICTORY!! WOLF IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 8 EUR \n" ;
        VILK = true ;
         PresentAchievement = achievement[1] ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
 return Challenge() ;
                        }
            else
                ClearScreen() ;

        cout << "DEFEAT IN FIGHT vs WOLF ! \n" ;
        money = money - 8 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30 ;
        KIEKHARD ++ ;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;




}

void DIDELISVILKAS  () {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH BIGWOLF! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 9999 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH BIGWOLF !!!!!!" << endl ;
          }
if ( weapon >= 1 && head >= 2 && chest >= 1  && boots >= 2   &&  shield >= 2 &&  gloves >= 1 ){
money = money + 9 ;
  ClearScreen() ;
        cout << "VICTORY!! BIGWOLF IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 9 EUR \n" ;
        DIDELISVIL = true ;
         KIEKHARD ++ ;
         PresentAchievement = achievement[2] ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30 ;
            return Challenge() ;
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT IN FIGHT vs BIGWOLF ! \n" ;
        money = money - 9 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;


}

void MAZASLOKIS()   {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH SmallBear! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH SmallBear!!!!!!" << endl ;
          }
if ( weapon >= 2 && head >= 2 && chest >= 1  && boots >= 2   &&  shield >= 2 &&  gloves >= 1 ){
money = money + 10 ;
  ClearScreen() ;
        cout << "VICTORY!! SmallBear IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 10 EUR \n" ;
        MAZASLOK = true ;
         PresentAchievement = achievement[3] ;
         KIEKHARD ++ ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30;
            return Challenge();
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT IN FIGHT vs SmallBear ! \n" ;
        money = money - 10 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;


}

void DIDELISLOKIS()  {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH Bear! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH  Bear!!!!!!" << endl ;
          }
if ( weapon >= 2 && head >= 2 && chest >= 2  && boots >= 2  &&  shield >= 2 &&  gloves >= 2 ){
money = money + 15 ;
  ClearScreen() ;
        cout << "VICTORY!! SmallBear IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 15 EUR \n" ;
        KIEKHARD ++ ;
        DIDELISLOK = true ;
         PresentAchievement = achievement[4] ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30;
            return Challenge();
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT IN FIGHT vs Bear ! \n" ;
        money = money - 15 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;


}

void DRAKONAS() {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH DRAGON! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH  DRAGON!!!!!!" << endl ;
          }
if ( weapon >= 3 && head >= 2 && chest >= 3  && boots >= 2 &&  shield >= 2 &&  gloves >= 2 ){
money = money + 20 ;
  ClearScreen() ;
        cout << "VICTORY!! DRAGON IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 20 EUR \n" ;
        DRAKONS = true ;
        KIEKHARD ++ ;
         PresentAchievement = achievement[5] ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30;
            return Challenge();
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT IN FIGHT vs DRAGON ! \n" ;
        money = money - 20 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;


}


 void MAFIA1() {
 ClearScreen();
  for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH MAFIA!!!!!!" << endl ;
          }
if ( weapon >= 3 && head >= 3 && chest >= 3  && boots >= 3  &&  shield >= 3 &&  gloves >= 2 ){

  ClearScreen() ;
        cout << "VICTORY!! MAFIA DEAD !! CONGRATS !!! \n" ;
        cout << "NOW LET'S KILL MAFIABOSS\n" ;
        KIEKHARD ++;
         MAFIA = true ;
       cin.ignore();
            cin.get();
            ClearScreen();
                        }


 }


  void BOSSMAFIA1() {
 ClearScreen();
  for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH MAFIA BOSS !!!!!!" << endl ;
          }
if ( weapon >= 3 && head >= 3 && chest >= 3  && boots >= 3  &&  shield >= 3 &&  gloves >= 3 ){

  ClearScreen() ;
        cout << "VICTORY!! MAFIA BOSS IS DEAD !! CONGRATS YOU SAVE YOUR FAMILY !!! \n" ;
        cout << "THANK YOU FOR PLAYING\n" ;
        cout << "PRESS SOME ..ENTER.. CLICKS FOR EXIT\n" ;
        KIEKHARD ++;
         BOSSMAFIA = true ;

            GAMEOVER() ;
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT PRESS MAFIA BOSS  ! \n" ;
        cout << "THANK YOU FOR YOU GAME \n" ;
      cin.ignore();
            cin.get();
        HP = HP - 999999 ;
        GAMEOVER() ;

 }


  void BOSSMAFIA2() {
 ClearScreen();
  for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH MAFIA BOSS !!!!!!" << endl ;
          }
if ( weapon >= 3 && head >= 3 && chest >= 3  && boots >= 3  &&  shield >= 3 &&  gloves >= 3 ){

  ClearScreen() ;
        cout << "VICTORY!! MAFIA BOSS IS DEAD !! CONGRATS YOU SAVED SELLER FAMILY !!! \n" ;
        cout << "THANK YOU FOR PLAYING\n" ;
        cout << "PRESS SOME ..ENTER.. CLICKS FOR EXIT\n" ;
        KIEKHARD ++;
         BOSSMAFIA = true ;

            GAMEOVER() ;
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT PRESS MAFIA BOSS  ! \n" ;
        cout << "THANK YOU FOR YOU GAME \n" ;
      cin.ignore();
            cin.get();
        HP = HP - 999999 ;
        GAMEOVER() ;

 }




void MISKODVASIA() {
if (  STAMINA < 30 ) {
        ClearScreen();
    cout <<  string( 52, ' ') <<  "NEED STAMINA FOR STAY TO FIGHT WITH FORESTFATHER! " << endl ;
     cin.ignore();
            cin.get();
  return Challenge() ;}
for ( int i = 0 ; i < 5555 ; i ++ ) {
            cout <<  string( 52, ' ' ) << "FIGHTING WITH  FORESTFATHER!!!!!!" << endl ;
          }
if ( weapon >= 3 && head >= 3 && chest >= 3  && boots >= 3  &&  shield >= 3 &&  gloves >= 2 ){
money = money + 25 ;
  ClearScreen() ;
        cout << "VICTORY!! FORESTFATHER IS DEAD !! CONGRATS !!! \n" ;
        cout << "YOU WON 25 EUR \n" ;
        KIEKHARD ++ ;
         PresentAchievement = achievement[6] ;
         MISKODVA = true ;
       cin.ignore();
            cin.get();
            ClearScreen();
            STAMINA = STAMINA - 30;
            return Challenge();
                        }
            else
                ClearScreen() ;
        cout << "DEFEAT IN FIGHT vs FORESTFATHER ! \n" ;
        money = money - 25 ;
        HP = HP - 50 ;
        STAMINA = STAMINA - 30;
       cin.ignore();
            cin.get();
            ClearScreen();
            return Challenge() ;

}

int ACHIEVEMENT ( )  {
    ifstream fin;
    fin.open ("ACHIEVEMENT.txt");


ach =  (sizeof(achievement)/sizeof(*achievement)); // ARRAY EL FIND

    for ( int i = 0 ; i < ach ; i++ )
    {
        fin >> achievement[i] ;
    }

    fin.close() ;

    PresentAchievement = achievement[0] ;


    }
#endif // CHALLENGE_H_INCLUDED
