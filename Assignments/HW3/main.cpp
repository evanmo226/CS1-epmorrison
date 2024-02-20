/*
    Homework 3 : Basic Calculator using Fuctions and Automated Unit Testing

    By: Evan Morrison
    Date: Feb 19 2024

    ???

*/

#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <cstdio>

using namespace std;

//Function returns sum
float add(float one, float two)
{
    return one + two;
}

// Function returns product
float mult(float one, float two)
{
    return one*two;
}

//Function returns the quotient of the two numbers
float divid(float one, float two)
{
    return one/two;
}

//Funtion returns the difference between the numbers
float subt(float one, float two)
{
    return one - two;
}

//Function returns the remainder of one/two
float rem(int one, int two)
{
    return one % two;
}

//Function returns one ^ two
float power(float one, float two)
{
    return pow(one, two);
}

//Funtion returns the sqaure root of the number
float root(float one){
    return sqrt(one);
}

//Fucntion finds and returns the bigger of the two numbers
float large(float one, float two)
{
    if(one > two){
        return one;
    }
    return two;
}

//This tests the other funtions to make sure the results are valid and true
void test()
{
    //First tests
    assert(add(2, 3) == 5);
    assert(mult(2,3) == 6);
    assert(divid(4,2) == 2);
    assert(subt(4,3) == 1);
    assert(rem(5, 2) == 1);
    assert(power(3,2) == 9);
    assert(root(16) == 4);

    //Second tests
    assert(add(6, 3) == 9);
    assert(mult(4,3) == 12);
    assert(divid(24,6) == 4);
    assert(subt(7,3) == 4);
    assert(rem(12, 9) == 3);
    assert(power(2,6) == 64);
    assert(root(9) == 3);
    cout << "All test cases passed." << endl;
}

//Main funtion
int main(){
    float one;
    float two;
    cout << "Hello! Please enter two numbers below.\nNumber one: ";
    cin >> one;
    cout << "Number two: ";
    cin >> two;
    test();

    cout << "\nThe sum of the two numbers is " << add(one, two) << endl;
    cout << "The product of the two numbers is " << mult(one, two) << endl;
    cout << "The quotient of the numbers is  " << divid(one, two) << endl;
    cout << "The difference between the numbers is " << subt(one, two) << endl;
    cout << "The remainder of " << one << " divided by " << two << " is " << rem(one, two) << endl;
    cout << "The result of " << one << " to the power of " << two << " is " << power(one, two) << endl;
    cout << "The square root of " << one << " is " << root(one) << endl;
    cout << "The square root of " << two << " is " << root(two) << endl;
    cout << "And the larger of the two numbers is " << large(one, two) << endl;

    


    return 0;
}

