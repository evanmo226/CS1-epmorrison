/*
Name: Evan Morrison

All about the variables
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <random>

using namespace std;


int main()
{
    srand(time(0));
    cout << rand()%100 +1 << endl;




    // string phrase;

    // phrase = "this is a sentence";

    // float n1, n2;
    // float sum;
    // cout << "Enter number 1: ";
    // cin>> n1;

    // cout << "Enter number 2:";
    // cin >> n2;

    // sum = n1+ n2;
    // assert(sum == 57);

    // cout << n1 << " + " << n2 << " = " << sum << endl;
    // printf("");

    // int origSeconds;
    // int numSeconds;
    // int numMinutes;
    // int numHours;

    // cout << "Enter number of seconds: ";
    // cin >> origSeconds;
    // numSeconds = origSeconds;

    // numHours = numSeconds/3600;
    // numMinutes = (numSeconds/60) - (numHours*60);
    // numSeconds = numSeconds%60;

    // cout << "The hours:minutes:seconds given " << origSeconds << " seconds is: \n"
    //     << numHours << ":" << numMinutes << ":" << numSeconds << endl;
    return 0;
}