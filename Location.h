#ifndef LOCATION_H_INCLUDED
#define LOCATION_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std ;
int location;/// W is what ... b is broken ...
char loc;
string Wlocation = "";
string WSeason = "";
////////////////////////////////
   void ClearScreen() ;
   void SetWindow(int Width, int Height);
    int LOCATION ( ) ;
   void Wloc( ) ;
    int Console();
//////////////////////////////


 void Wloc ()  {

     ClearScreen();
      Console () ;
      SetWindow(120,11);

     for ( int i = 0; i < 20 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
        cout << "\n";
        int pas ;

 cout << string( 45, ' ' ) << "1)Choice Location " << endl ;
 cout << string( 45, ' ' ) << "2)Random Location " << endl ;
 for ( int i = 0; i < 20 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
        cin >> pas ;


if ( pas == 1 ){

   for ( int i = 0; i < 25 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
        cout << "\n";


 cout << string( 45, ' ' ) << "1)EGIPTAS" << endl ;
 cout << string( 45, ' ' ) << "2)GRENLANDIJA" << endl ;
  cout << string( 45, ' ' ) <<"3)LIETUVA" << endl ;
 for ( int i = 0; i < 25 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }


        int choicel ;
        cin >> choicel ;
        if ( choicel == 1 ) {
            location = 0 ;

        }
        if (choicel == 2 ) {
            location = 1;

        }
        if (choicel == 3 ) {
            location = choicel - 1 ;

        }

        else if (choicel < 0 || choicel > 3 ) {
        return Wloc ();}

        }


    if ( pas == 2 )  {
    srand (time(NULL));
    location = rand() % 3 ;
    }
    else if (pas < 1 || pas > 2 ) {
        return Wloc ();}
 }

int LOCATION ( )
{
ClearScreen() ;

    if ( location == 0 )
    {
        ClearScreen() ;
        Console () ;
        SetWindow(120,33);

        cout << endl ;
        for ( int i = 0; i < 40 ; i ++)
        {
            cout << "*" ;
        }

        loc = 'E' ;
        Wlocation = "EGIPTAS\n " ;

        for ( int i = 0; i < 40 ; i ++)
        {
            cout << "*" ;
        }
        cout << endl ;
    }
    if ( location == 1 )
    {
        ClearScreen() ;
        Console () ;
        SetWindow(120,33);

        cout << endl ;
        for ( int i = 0; i < 40 ; i ++)
        {
            cout << "*" ;
        }

     Wlocation = "GRENLANDIJA\n" ;
        loc = 'G' ;

        for ( int i = 0; i < 40 ; i ++)
        {
            cout << "*" ;
        }
        cout << endl ;

    }
    if ( location == 2 )
    {
        ClearScreen();
        Console () ;
        SetWindow(134,18);

    for ( int i = 0; i < 40 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
           cout << "\n";
        cout << string( 45, ' ' ) <<  "JUS PATEKOTE I LIETUVA ! " << endl ;
         Wlocation = "LIETUVA\n" ;
        cout << string( 45, ' ' ) <<  "Kokiame sezone norite zaisti ? " << endl ;
         cout << string( 45, ' ' ) <<  "*** pavasaris, vasara, ruduo, ziema ***" << endl ;
         for ( int i = 0; i < 40 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
        string kokiame ;
        int loci = 0 ;
        do
        {

            cin >> kokiame ;
            if (kokiame == "pavasaris" ||  kokiame  == "p" || kokiame  == "pa" || kokiame  == "pav"
                    ||kokiame  ==  "pava" || kokiame  == "pavas" || kokiame  == "pavasa"
                    || kokiame  == "pavasar" || kokiame  == "pavasari")
            {

                loc = 'P' ;
                loci ++ ;
                for ( int i = 0; i < 40 ; i ++)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
            if (kokiame == "vasaris" || kokiame  == "v" || kokiame  == "va" || kokiame  == "vas"
                    ||kokiame  ==  "vasa" || kokiame  == "vasar" || kokiame  == "vasari")
            {
                loc = 'V' ;
                loci ++ ;
                WSeason = "Vasaris\n" ;
                for ( int i = 0; i < 40 ; i ++)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
            if (kokiame == "ruduo" || kokiame  == "r" || kokiame  == "ru" || kokiame  == "rud"
                    ||kokiame  ==  "rudu")
            {


                loc = 'R' ;
                loci ++ ;
                WSeason = "Ruduo\n" ;
                for ( int i = 0; i < 40 ; i ++)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }

            if (kokiame == "ziema" || kokiame  == "zi" || kokiame  == "zie" || kokiame  == "ziem" || kokiame  == "z"  )
            {
                loc = 'Z' ;
                WSeason = "Ziema\n" ;
                loci ++ ;
                for ( int i = 0; i < 40 ; i ++)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
            else
            {
                for ( int i = 0; i < 40 ; i ++)
                {
                    cout << "*" ;
                }
                cout << endl ;
            }
        }
        while ( loci != 1 ) ;
// Console () ;
// SetWindow(120,33);


    }

    return 0;
}


#endif
// LOCATION_H_INCLUDED
