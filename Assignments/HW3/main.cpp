/*
    Homework 3 : Basic Calculator using Fuctions and Automated Unit Testing

    By: Evan Morrison
    Date: Feb 19 2024

    ???

*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float add(float one, float two)
{
    return one + two;
}

float mult(float one, float two)
{
    return one*two;
}

float divid(float one, float two)
{
    return one/two;
}

float subt(float one, float two)
{
    return one - two;
}

float rem(int one, int two)
{
    return one % two;
}

float power(float one, float two)
{
    return pow(one, two);
}

float root(float one){
    return sqrt(one);
}

int main(){
    float one;
    float two;
    cout << "Hello! Please enter two numbers below.\nNumber one: ";
    cin >> one;
    cout << "Number two: ";
    cin >> two;

    cout << one << endl;
    cout << two << endl;

    


    return 0;
}