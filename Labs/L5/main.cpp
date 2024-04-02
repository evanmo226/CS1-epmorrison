/*
    Loops Lab
    Updated By: Evan Morrison
    CSCI 130
    Date: 4-1-2024

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printTriangle(int height){
    //Takes height as an argument to print the triangle of that with height *
    int row = 1;
    //row
    while (row<= height){
        //column
        for(int col = 1; col <=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}

void printFlippedTriangle(int height){
    /*
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * * 
    * 
    
    */
   // FIXME 3
    int row = height;                        //FIXED
    while (row > 0){
        for(int col = 1; col <= row; col ++){
        cout << "* ";
    }
    row -= 1;
    cout << endl;
   }
}

/*  
FIXME4
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.

*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   

*/

void printSquare(int height){               //FIXED
    int row = height;
    while(row>0){
        for (int col = 1; col<=height; col ++){
            cout << "* ";
        }
        row -= 1;
        cout << endl;
    }
}

void clearScreen(){
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main(int argc, char* argv[]){
    // FIXME5 add a loop to make the program to continue to run until the user wants to quit
    bool quit = false;
    while(!quit){
        // FIXME6 call clearScreen function to clear the screen for each round of the loop
        clearScreen();      // FIXED
        int height;
        cout << "Program prints geometric shapes of given height with *\n";
        cout << "Please enter the height of the shape: ";
        cin >> height;
        //call printTriangle function passing user entered height
        printTriangle(height);

        // FIXME7
        // Call printFlipped Triangle passing proper argument
        // Manually test the function
        printFlippedTriangle(height);       //FIXED

        //FIXME 8
        // Call function in FIXME4
        printSquare(height);        //FIXED

        //FIXME 9
        char input;         //FIXED
        cout <<"Enter [y/Y] to run the program again, anything else to quit.\n";
        cin >> input;

        //FIXME 10
        if (input == 'y' || input == 'Y'){
            quit = false;
        }
        else quit = true;
    }
}