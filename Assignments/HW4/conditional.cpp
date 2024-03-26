/*
    Homework 4 : CLI Menu, Conditonals, Functions and Testing

    By: Evan Morrison
    Date: March 26

*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

//print menu funciton
void printMenu(void);

void getFiveNumbers(double &, double &, double &, double &, double &);

//function takes 5 numbers and returns sum of them
double findSum(const double &, const double &, const double &, const double &, const double &);

//function takes 5 numbers and returns product of them
double findProduct(const double &, const double &, const double &, const double &, const double &);

//function takes 5 numbers and returns average of numbers calling prior function
double fundAverage(const double &, const double &, const double &, const double &, const double &);

//function returns largest value -- own condiontals
double findLarge(const double &, const double &, const double &, const double &, const double &);

//function returns smallest value -- own condiontals 
double findSmall(const double &, const double &, const double &, const double &, const double &);

//function returns if floor of sum is even, odd, or zero
string findFloor(const double &, const double &, const double &, const double &, const double &);

void test();

bool program();

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main(int argc, char* argv[]){
    bool contRunning = true;
    if (argc == 2 && string(argv[1]) == "test"){
        test();
        exit(EXIT_SUCCESS);
    }
    else{
        while (true){
            if(!program())
                break;
            cin.ignore(100, '\n');
            cout << "Enter to continue... ";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "Hit enter to quit the program.\n";
    cin.get();
    cout << "Good bye!" << endl;
    return 0;
}