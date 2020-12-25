#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

Artwork::Artwork(){
   title = "None";
   year = 0;
}

Artwork::Artwork(string artName, int yearCreated, Artist userArtist){
   title = artName;
   year = yearCreated;
   artist = userArtist;
}

string Artwork::GetTitle(){
   return title;  
}

int Artwork::GetYearCreated(){
   return year;
}

void Artwork::PrintInfo(){
   artist.PrintInfo();
   cout << "Title: " << title << ", " << year;  
}
