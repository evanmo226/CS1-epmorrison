/*

    Evan Morrison

*/

#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <cstdlib>
#include <cstdio>
#include <random>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    int nameW, titleW, positionW;
    nameW = 15;
    titleW = 25;
    positionW =13;
    cout << left;
    cout << setw(nameW) << "Name" << setw(titleW) << "Title" << setw(positionW) << "Position" << endl;
    cout << setfill ('=');
    cout << setw(nameW + titleW + positionW) << "" << endl;
    cout << setfill(' ');
    cout << setw(nameW) << "Evan" << setw(titleW) << "RAHHHHHH" << setw(positionW) << "CAR DRIVER" << endl;
    cout << setw(nameW) << "Ligma" << setw(titleW) << "MKMKMKMK" << setw(positionW) << "FOOL" << endl;
    cout << setw(nameW) << "Johnny Smith" << setw(titleW) << "Cheif" << setw(positionW) << "Fire Fighter" << endl;
    cout << right;
    cout.setf(ios::fixed, ios::floatfield);

    // cout << "Please hit enter to quit: " << endl;
    // cin.ignore(1000, '\n');
//      cout << setw(10) << "HelloWorld!!" << endl;
//      char someCh = 'A';

//     cout << (char)tolower(someCh) << endl;
    return 0;
}