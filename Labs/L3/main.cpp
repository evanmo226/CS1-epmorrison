/*
    Functions Lab
    Updated By: Evan Morrison
    CSCI 130
    Date: 2-13-2024

    Program prompts the user to enter two points in the form (x1, y1) and (x2, y2) and finds the distance between the two points using a function.
    Algorithm steps:
        1. Define a function called findDistance(…) that takes four parameters x1, y1 and x2, y2 as two points
            a. finds the distance between them using the equation: √((x2-x1)^2 + (y2-y1)^2)
            b. returns the calculated distance value
        2. Prompt user to enter two points in (x, y) format
        3. Store them into 4 individual variables
        4. Call function getDistance by passing 4 entered numbers as arguments
        5. Display results with proper description. Format output numbers to 2 decimal points.
        6. Test and validate that program output is correct for a given set of input points.
        7. BONUS - (10 points) Using a loop repeat step 2-6 until the user wants to quit.

*/

#include <iostream>
#include <string>
//#include <cstdio>
#include <cassert>
#include <cmath>

using namespace std;

const float epsilon = 1e-5; // 0.00001 accuracy with upto 5 decimal points

//function prototypes

//Function that calculates the distance between the two points
// x1, y1 and x2, y2 and returns the calculated value
double findDistance(int, int, int, int);

//test function that runs automated testing
void test();

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main()
{
    int x1, y1, x2, y2;
    char ch;
    char option = 'y';

    while(option == 'y') //FIXED
    {
        clearScreen();
        cout << "Program calculates distance between 2 points on a 2D coordinate." << endl;
        cout << "Enter a point in the form (x, y): ";
        // parse the input stream
        cin >> ch >> x1 >> ch >> y1 >> ch; // value stored in ch is ignored
        printf("(x1, y1) = (%d, %d)\n", x1, y1);

        cout << "Enter a second point in the form (x, y): ";

        //Read/parse the second point and store data into variables x2 and y2
        cin >> ch >> x2 >> ch >> y2 >> ch; //FIXED
        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        //Call test function
        test(); // FIXED

        //call findDistance function passing proper arguments
        double dist = findDistance(x1, y1, x2, y2); //FIXED

        //Using printf function display the returned distance with proper description
        printf("The distance between the points (%d, %d) and (%d, %d) is %f\n", x1, y1, x2, y2, dist);//FIXED

        option = ' ';
        cout << "Would you like to run the program again? (enter y or n): ";
        cin.ignore(1000, '\n');
        cin >> option;

    }

    cin.ignore(1000, '\n');
    cout << "Enter to quit the program: ";
    cin.get();
    cout << "Good bye..." << endl;
    return 0;
}


double findDistance(int x1, int y1, int x2, int y2){
    //Find the distance between (x1, y1) and (x2, y2)
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2)); //FIXED
    // following the algorithm in step 1
    // return the calculated distance
    return 0.000000;
}

void test()
{
    float result =  findDistance(4, 3, 5, 1);
    float expected = 2.236067f;
    assert( fabs(result - expected) <= epsilon); //accept the result if it's less than the error of margin
    
    //add at least two more test cases
    result = findDistance(5, 6, 2, 1);
    expected = 5.830952f;
    assert( fabs(result - expected) <= epsilon);
    
    result = findDistance(1, 1, 2, 2);
    expected = 1.41421356f;
    assert( fabs(result - expected) <= epsilon);

    cerr << "\nall tests passed..." << endl;
}