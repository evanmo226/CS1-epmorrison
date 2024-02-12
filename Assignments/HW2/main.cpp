/*
    Homework 2 : Triangle

    By: Evan Morrison
    Date: Feb 7 2024

    Program find perimeter and area of a 
    triangle given inputs of three side lengths.

*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    //Declaring variables for the program
    int side1, side2, side3;
    int perim;
    double area;

    // Prompts user to enter side lengths
    cout << "Hello, please enter three side lengths of the triangle." << endl; 

    //User enters side names into the three variables
    cout << "Side 1: ";
    cin >> side1;
    cout << "Side 2: ";
    cin >> side2;
    cout << "Side 3: ";
    cin >> side3;

    //Making sure the side lengths actually form a triangle
    if(side1+side2 < side3){
        cout << "The given numbers do not form a triangle. Please try again." << endl;
        return 0;
    }
    if(side3+side2 < side1){
        cout << "The given numbers do not form a triangle. Please try again." << endl;
        return 0;
    }
    if(side1+side3 < side2){
        cout << "The given numbers do not form a triangle. Please try again." << endl;
        return 0;
    }

    //If the code got to this point, a triangle is possible
    cout << "\nThe given triangle is possible." << endl;

    //Calculating the perimeter of the triangle
    perim = side1 + side2 + side3;

    //Calculating the area of the triangle using Heron's formula
    double s = (perim)/2; //using perim to solve for the s value of the formula
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));

    cout << "The perimeter of the triangle is: " << perim << endl;
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}