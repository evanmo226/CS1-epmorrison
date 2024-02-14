/*
Name: Evan Morrison

Rectangle calculator

Steps which I want:
1. Greet user
    a. display name prompt
    b. display welcome prompt with name
2. Prompt for side1 and side2 (int)
3. Calculate perimeter (perim = 2(side1) + 2(side2)
4. Calculate the area (area = side1 * side2)
5. Print out results
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string promptName(){
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    return name;
}

void greetUser(string name){
    cout << "Welcome " << name << " to our rectangle calculator!" << endl;
}

double getSide(){
    double side;
    cout << "Please enter a side of your rectangle: ";
    cin >> side;
    return side;
}

double calcPerim(double s1, double s2){
    return 2*(s1 + s2);
}

double calcArea(double s1, double s2){
    return s1*s2;
}

void printResults(double s1, double s2, double perim, double area){
    printf("The rectangle with sides %f and %f has an area of %f and a perimeter of %f\n", s1, s2, area, perim);
}

void test()
{
    assert(calcPerim(10,12 == 44));
    cout << "All test cases passed." << endl;
}

int main(){
    double sidea, sideb;
    double perim, area;
    string name = promptName();

    greetUser(name);
    sidea = getSide();
    sideb = getSide();

    test();
    perim = calcPerim(sidea, sideb);
    area = calcArea(sidea, sideb);
    printResults(sidea, sideb, perim, area);

    return 0;
}