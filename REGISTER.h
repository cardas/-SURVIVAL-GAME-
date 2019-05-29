#ifndef REGISTER_H_INCLUDED
#define REGISTER_H_INCLUDED


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


///////////////////////


using namespace std ;




int REGISTER( )  {
ClearScreen() ;

cout << "PLEASE NICKNAME \n";
cin >> PlayerNAME ;

}










#endif // REGISTER_H_INCLUDED
