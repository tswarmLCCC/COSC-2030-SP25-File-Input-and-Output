/*
Make:  Here we have our file for the actual homework.  Implement the file input, reading, and output. 
 This is the homework you'll turn in!  

Turn in all of the files necessary to run your code in a zip file and submit that to this assignment page.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare variables
    int score;
    int hitpoints;
    int exit = false;
    string name;
    string command;

    // Prompt user to save or restore game state
   

    while (!exit ){
    cout << "Enter 'enter' to record your data, 'save' to save game state, 'exit' to exit the program,  or 'restore' to restore game state: ";
    cin >> command;
        if (command == "save") {
            // Save input to file


            cout << "Game state saved." << endl;
        } else if (command == "restore") {
            // Restore game state

        } else if (command == "enter") {
            // Get input from user


            cout << "Game data entered." << endl;
        } else if (command == "exit") {
            // Restore game state
            exit = 1;
        }else {
            cout << "Invalid command." << endl;
        }
        // Print output
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Hitpoints: " << hitpoints << endl;
    }

    // Print output
     cout << "Goodbye! ";
    //cout << "Name: " << name << endl;
    //cout << "Score: " << score << endl;
    //cout << "Hitpoints: " << hitpoints << endl;
    return 0;
}
