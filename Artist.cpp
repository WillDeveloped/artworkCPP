#include "Artist.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

Artist::Artist(){
   name = "None";
   birth = 0;
   death = 0;
}

Artist::Artist(string artistName, int birthYear, int deathYear){
   name = artistName;
   birth = birthYear;
   death = deathYear;
}

string Artist::GetName(){
   return name;
}

int Artist::GetBirthYear(){
 return birth;  
}

int Artist::GetDeathYear(){
 return death;  
}

void Artist::PrintInfo(){
   cout << "Artist: " << name;
   if(death < 0){
   cout << ", born " << birth << endl;
   } else {
   cout << " (" << birth << "-" << death << ")" << endl;  
   }
}
