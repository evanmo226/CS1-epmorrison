/*
    Homework 4 : CLI Menu, Conditonals, Functions and Testing

    By: Evan Morrison
    Date: March 26

*/

#include <iostream>
#include <cstdio>
#include <string>
#include <casert>
#include <cmmath>

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