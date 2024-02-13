/*
Name: Evan Morrison

Functions
*/
#include <iostream>
#include <string>

using namespace std;

void sayHello()
{
    cout << "Hello World" << endl;
}

int addToNumber()
{   
    int someNumber;
    cout << "Please enter a number: ";
    cin >> someNumber;
    someNumber += 10;
    return someNumber;
}

char giveMeAChar()
{
    return 'e';
}
int addNums(int one, int two)
{
    return one + two;
}
int main()
{
    int answer;
    int num1, num2;
    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    answer = addNums(num1, num2);
    cout << num1 << " + " << num2 << " = " << answer << endl;

    cout << "Hit enter to quit the program: ";
    cin.ignore(10000,'\n');
    cin.get();

    return 0;
}