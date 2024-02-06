/*
    Lab 2 : Circle Lab

    By: Evan Morrison
    Date: Feb 6 2024

    This program prompts the user to ender the radius of a circle.
    If then calculates and displays its area and circumference.

    Algorithm steps:
    1. Prompt user to enter radius of a circle and store the radius into a variable
    2. Calculate area using the formula pi x radius x radius and store the value into a variable
    3. Calculate circumference using the formula 2 x pi x radius and store the value into a variable
    4. Output the calculated values for area and circumference

*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    const double pi = 3.14159;
    double radius=0, area=0, circumference=0;
    string name = "Anonymous";
    cout << "Hi there, what's your full name? ";
    
    getline(cin, name); //FIXED

    cout << "Nice meeting you, " << name << "!" << endl;
    cout << "\nProgram finds area and circumference of a circle with the given radius. \n\n";

    cout << name << ", please enter radius of a circle: ";
    cin >> radius;

    area = pi * pow(radius, 2);

    circumference = 2 * pi * radius; //FIXED

    cout << "Your circle has radius: " << fixed << setprecision(6) << radius << endl;
    cout << "Area of the circle is:\t" << area << '\n';

    cout << "Circumference of the circle is:\t" << circumference << endl; //FIXED

    cout << "\nGood bye...\nHit enter to exit the program!" << '\n';
    cin.ignore(1000,'\n');

    cin.get();
    return 0;
}