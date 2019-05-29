#ifndef Welcomer_H_INCLUDED
#define Welcomer_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>
////////////////////////////////////////

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
#include "LEADERBOARD.h"

////////////////////////////////////////
int LEADERBOARD() ;
int ADVANCE() ;

////////////////////////////////////////
using namespace std ;



int ADVANCE() {
 ClearScreen() ;
     Console () ;
     SetWindow(134, 5) ;


cout << string( 52, ' ' ) <<  "1) BACK TO RULE PAGE\n";
cout << string( 52, ' ' ) <<  "2) LEADERBOARD\n";
cout << string( 52, ' ' ) <<  "3) EXIT\n" ;

int pas;
cin >> pas ;

if ( pas == 1 ) {
ClearScreen();
 Rules ();
}
if ( pas == 2 ) {

    LEADERBOARD() ;

}
if ( pas == 3 ) {
ClearScreen() ;
cout <<  string( 10, ' ' ) << " TIER " << "ARE YOU SURE YOU WANT TO EXIT??\n";
cout << string( 10, ' ' )  << "Y/N\n" ;
char YesNo ;
cin >> YesNo ;
if (YesNo=='N' || YesNo == 'n') {
    return ADVANCE();
}
else if (YesNo=='Y' || YesNo == 'y') {


GAMEOVER();
}
else {
    return ADVANCE();
}


 }
 }



#endif // DIFFICULTY_H_INCLUDED
