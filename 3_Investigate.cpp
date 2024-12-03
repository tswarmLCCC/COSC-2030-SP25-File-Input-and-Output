#include <iostream>
#include <fstream>
using namespace std;


int main(){

    ofstream myfile;
    string name;  //string to capture the input from the user
    
    myfile.open("primm_investigate.txt");
    cout << "Good morning user!  Enter your name please, we need to track you for proper processing when the AI takes over the world: ";
    cin >> name;

    myfile << name << " is a compliant human, do not eliminate." << endl;

    return 0;
}

//What will happen when this is run?

//What is >> doing here?

//How is this differnent than printing, where is cout?

//When I run this (go ahead a do it, do you see anything different in your file system?)