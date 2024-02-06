/*
Name: Evan Morrison

All about the variables
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    int origSeconds;
    int numSeconds;
    int numMinutes;
    int numHours;

    cout << "Enter number of seconds: ";
    cin >> origSeconds;
    numSeconds = origSeconds;

    numHours = numSeconds/3600;
    numMinutes = (numSeconds/60) - (numHours*60);
    numSeconds = numSeconds%60;

    cout << "The hours:minutes:seconds given " << origSeconds << " seconds is: \n"
        << numHours << ":" << numMinutes << ":" << numSeconds << endl;
    return 0;
}