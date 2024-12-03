/*
A photographer is organizing a photo collection about the national parks in the US and would like to annotate the 
information about each of the photos into a separate set of files. Write a program that reads the name of a text 
file containing a list of photo file names. The program then reads the photo file names from the text file, 
replaces the "_photo.jpg" portion of the file names with "_info.txt", and outputs the modified file names.

Assume the unchanged portion of the photo file names contains only letters and numbers, and the text
 file stores one photo file name per line. If the text file is empty, the program produces no output.
*/

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
   string inputFile;
   string fileName;
   int position;
   ifstream inFS;

   // Get the name of the inputFile file
   cout << "Input the filename you'd like to process: "  << endl;
   cin >> inputFile;

   // Open the input file
   inFS.open(inputFile);
   if (!inFS.is_open()) {
      cout << "Could not open input file " << inputFile << endl;
      return 1;
   }

   inFS >> fileName;
   while(!inFS.fail()) {
      
      //do some other cool stuff here...
      position = static_cast<int>(fileName.find("_photo.jpg"));      
      fileName.replace(position, strlen("_photo.jpg"), "_info.txt");
      cout << fileName << endl;
      inFS >> fileName;
   }

   if (!inFS.eof()) {
      cout << "Input failure before reaching end of file." << endl;
   }

   // Close the input file
   inFS.close();

   return 0;
}