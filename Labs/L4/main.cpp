/*
Conditional Lab

Updated by: Evan Morrison
Today's Date : 4-12-2024

Program finds statistical values of two given numbers using user defined fuctions.

A menu-driven program that demonstrates user-defined functions, automated testing conditional statementrs and loop.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>

using namespace std;

//function that prints menu options
void printMenu(void);

//prompts user to enter two numbers
// numbers stored in provided parameters
void getTwoNumbers(double &, double &);

// function takes two numbers; finds and returns the sum of the two
double findSum(const double &, const double &);
 
// function takes two numbers; finds and returns the 2nd subtracted from the first
double findDifference(const double &, const double &);
 
// function takes two numbers; finds and returns the product of them
double findProduct(const double &, const double &);
 
// function takes two numbers; finds; returns the quotient of first divided by the second
double findQuotient(const double &, const double &);
 
// function takes two numbers; finds and returns the average of the two
void findAverage(const double &, const double &, double &);
 
// function takes two numbers; finds and returns the larger of the two
double findLarger(const double &, const double &);
 
// function takes two numbers; finds and returns the smaller of the two
double findSmaller(const double &, const double &);

void test();

bool program();

// function clears the screen using system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main(int argc, char* argv[]){
    bool keepRunning = true;
    if (argc == 2 && string(argv[1]) == "test"){
        test();
        exit(EXIT_SUCCESS);
    }
    else{
        //loop keeps program running until user wants to quit
        while (true){
            if (!program())
                break;
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Enter to quit the program.\n";
    cout << "Good bye..." << endl;
    cin.get();
    return 0;cd L
}