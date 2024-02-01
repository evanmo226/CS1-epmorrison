/*
    StdIO Lab
    ASCII Art - using literals and variables
    
    Updated By: Evan Morrison
    Date: 1 Feb 2023
    
    This program produces an ASCII art on the console.

    Algorithm steps: 
    1. Use variables to store data/values
    2. Write a series of cout statements to print the data/values
*/

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string name;
    cout << "Enter your name here: ";  //FIXED
    cin >> name;    //FIXED

    cout << "It is great to meet you " << name << "!" << endl;  //FIXED

    cout << "Hope you like my Tom & Jerry ASCII art...\n\n";

    string line1 = "    |\\_/|  \t*********************************     (\\_/)\n";
    cout << line1;

    string line2 = "   / @ @ \\ \t*           ASCII Lab     \t*    (='.'=)\n";
    cout << line2;  //FIXED

    cout << "  (>  0  <) \t*      By: Evan Morrison  \t*    (\")_(\")\n";   //FIXED

    string line4 = "    >>x<<   \t*           CSCI 130     \t*";
    cout << line4 << endl; //FIXED

    string line5 = "   /  O  \\   \t*********************************\n";
    cout << line5;  //FIXED


    cout << "\nGood bye... hit enter to exit the program: " << '\n';

    //FIXME10: make the console wait for user input

    return 0;
}