#ifndef LEADERBOARD_H_INCLUDED
#define LEADERBOARD_H_INCLUDED

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>

#include <string>
#include <windows.h> // Console Size Changer
#include <bits/stdc++.h>
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

int ACHIEVEMENT() ;
string PlayerNAME = "";

///////////////////////

int WELCOME() ;
using namespace std ;

int LEADERBOARD ();

int TOPKIEK [9999] ;
int n = sizeof(TOPKIEK)/sizeof(TOPKIEK[0]) ;
int a = -1;



string ReadItems ;

 //////////////////////////


//////////////////////////


int top_score(){
  int i = 0;
  for (i = 0; i < 50; ++i) {



  }

  return i;
}

int WELCOME ()
{
    ClearScreen() ;
     Console () ;
    SetWindow(120,10);

    string name;
    for ( int i = 0; i < 20 ; i ++)
    {
        cout << string( 20, ' '
                      ) <<  "*" ;
    }
    cout << endl;
    cout <<  string( 40, ' ' )  << "HEY, WHAT IS YOUR NAME?";


        for ( int i = 0; i < 20 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }

        cin >> PlayerNAME;








        ClearScreen() ;
         Console () ;
        for ( int i = 0; i < 60 ; i ++)
        {
            cout << string( 20, ' '
                          ) <<  "*" ;
        }
        cout << "\n";
        string banner ="Welcome " + name + " To SurVival GAME" ;

        int bannerSize = banner.size();
        string stars((bannerSize + 4), '*');
        string filler(bannerSize, ' ');
        cout << string( 40, ' ' ) <<  stars << endl; // buvo 52
        cout << string( 40, ' ' ) << "* " << filler << " *" << endl;
        cout <<  string( 40, ' ' ) << "* " << banner << " *" << endl;
        cout << string( 40, ' ' ) << "* " << filler << " *" << endl;
        cout <<string( 40, ' ' ) <<  stars << endl;

 }






int LEADERBOARD() {


  int rez = top_score() * 20;

FILE *output;


output = fopen("output.html", "w");



fprintf(output, "<!DOCTYPE html>\n"
         "<html style='background-image: url(https://obliqueexposure.files.wordpress.com/2014/06/img_7175.jpg);\n"
                  "    background-repeat: no-repeat;\n"
                  "    background-size: cover;'>\n" ) ;

       fprintf(output,  "<title>SURVIVAL</title>\n"
         "<link rel=\"stylesheet\" type=\"text/css\" href=\"style.css\">\n" )   ;
         fprintf(output, "<h1 style = color:blue>  SURVIVAL LEADERBOARD</h1>" );
   //  fprintf (output, "<title> SURVIVAL </title> </head> <body>\n") ;
      fprintf( output, "<table style=width:600px align=center  >"  ) ;
 fprintf( output, " <tr style = color:red> <th> Player Name </th> <th> Zombies killed </th> <th> Achievments </th> </tr>") ;
    fprintf( output, " <tr style = color:yellow> <th> %s </th> <th> %d </th> <th> %s </th> </tr>","George",45, "Conquero" );
    fprintf( output, " <tr style = color:yellow> <th> %s </th> <th> %d </th> <th> %s </th> </tr>","George",40, "Platinum" );

 /// EILUTE IR NAUJA EIL

   fclose(output);


  output = fopen ("output.txt", "a+");


   fprintf ( output, " <tr style = color:yellow> <th> %s </th> <th> %d </th> <th> %s </th> </tr> \n", PlayerNAME.c_str(), KIEKHARD , PresentAchievement.c_str() );


fclose(output);

output = fopen ("output.html", "a");
ifstream found("output.txt");
string ReadItems ;
    while(!found.eof())
    {
        getline(found,ReadItems);
       fprintf(output,"<th>%s</th>",ReadItems.c_str() );

    }
    found.close();



  //  for (int i = 0; i < 15; i++) {
//    fprintf(output,"<li style='color:#%d%d%d'>%d</li> ", i * 2, i * 5, i, i);
//  }
  //fprintf(output,"</ul>");





  fprintf(output,"</body>\n" "</html>");

 fclose(output);


  return 0;
}





#endif // LEADERBOARD_H_INCLUDED
