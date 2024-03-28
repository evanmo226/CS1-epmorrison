/*
    Homework 4 : CLI Menu, Conditonals, Functions and Testing

    By: Evan Morrison
    Date: March 26

    Program computes certain values such as sum, product, max, min, average, oddity of any 5 given numbers along with the following requirements.
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

// print menu funciton
void printMenu(void);

void getNumbers(double &, double &, double &, double &, double &);

//function takes 5 numbers and returns sum of them
double findSum(const double &, const double &, const double &, const double & , const double & );     

//function takes 5 numbers and returns product of them
double findProduct(const double & , const double & , const double & , const double & , const double & );

//function takes 5 numbers and returns average of numbers calling prior function
void fundAverage(const double &, const double & , const double & , const double & , const double &, double & );

//function returns largest value -- own condiontals
double findLarge(const double & , const double & , const double &, const double &, const double & );

//function returns smallest value -- own condiontals 
double findSmall(const double & , const double & , const double &, const double & , const double & );

//function returns if floor of sum is even, odd, or zero
string findFloor(const double & , const double & , const double &, const double & , const double & );

void test();

bool program();

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int main(int argc, char* argv[]){
    bool contRunning = true;
    clearScreen();
    if (argc == 2 && string(argv[1]) == "test"){
        test();
        exit(EXIT_SUCCESS);
    }
    else{
        while (contRunning){
            if(!program())
                break;
            cin.ignore(100, '\n');
            cout << "Enter to continue... ";
            cin.get();
            clearScreen();
        }
    }
    cin.ignore(100, '\n');
    cout << "\nHit enter to quit the program.";
    cin.get();
    cout << "Good bye!" << endl;
    return 0;
}

void printMenu(void){
    cout << "Menu Options:\n";
    cout <<"[1] Add 5 numbers" << endl;
    cout <<"[2] Multiply 5 numbers" << endl;
    cout <<"[3] Average of 5 numbers" << endl;
    cout <<"[4] Largest of 5 numbers\n";
    cout <<"[5] Smallest of 5 numbers\n";
    cout <<"[6] Sum of 5 numbers even, odd, or zero" << endl;
    cout <<"[7] Test the program\n";
    cout <<"[8] Quit the program" << endl;
    cout << "Enter one of the menu options [1-8]: ";
}

void getNumbers(double &n1, double &n2, double &n3, double &n4, double &n5)
{
    cout << "Enter five numbers separated by spaces: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

double findSum(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5){
    double sum = n1 + n2 + n3 + n4 + n5;
    return sum;
}

double findProduct(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5){
    double product = n1*n2*n3*n4*n5;
    return product;
}

void findAverage(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5, double &avg){
    avg = findSum(n1, n2, n3, n4, n5)/5;
}

double findLarge(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5){
    double larger = n1;
    if (n2>larger) larger = n2;
    if (n3>larger) larger = n3;
    if (n4>larger) larger = n4;
    if (n5>larger) larger = n5;
    return larger;
}

double findSmall(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5){
    double smaller = n1;
    if (n2<smaller) smaller = n2;
    if (n3<smaller) smaller = n3;
    if (n4<smaller) smaller = n4;
    if (n5<smaller) smaller = n5;
    return smaller;
}

string findFloor(const double &n1, const double &n2, const double &n3, const double &n4, const double &n5){
    double sum = findSum(n1,n2,n3,n4,n5);
    if(sum == 0) return "zero";
    int theLow = floor(sum);
    if (theLow%2 == 0) return "even";
    return "odd";

}

void test() {
    double ans = findSum(3, 4, 5, 2.2, 1);
    assert(ans== 15.2);
    assert(findSum(7, -5, 3 , -4, -6) == -5);
    assert(findSum(3, -5, 2, 1, -10) == -9);

    assert(findProduct(1, 1, 1, 1, 4) == 4);
    assert(findProduct(3,10,12.34, 23, 0) == 0);
    assert(findProduct(2, 3, 4, 2, 1) == 48);

    findAverage(3, 5, 2, 1, 6, ans);
    assert(ans == 3.4);
    findAverage(3, 2, 1, 0 ,19, ans);
    assert(ans == 5);
    findAverage(2, 3, 1, 1.8, 3, ans);
    assert(ans == 2.16);

    assert(findLarge(12, 3, 2, 5, 0) == 12);
    assert(findLarge(0, -1, -100, 15, 2) == 15);
    assert(findLarge(-12, -23, 0, -34, -123) == 0);

    assert(findSmall(-10, 123, 32, 93, 23) == -10);
    assert(findSmall(13, 23, 2 , 3434, 1) == 1);
    assert(findSmall(-120, 23, 323, -123, 65) == -123);

    assert(findFloor(1, 2, 3, 4, 5) == "odd");
    assert(findFloor(12,12, 32, 24, 10) == "even");
    assert(findFloor(12, -12, 10, -6, -4) == "zero");

    cout << "All test cases passed!" << endl;
}

bool program() {
    int option = 1;
    double n1=0, n2=0, n3=0, n4=0, n5=0;

    printMenu();
    
    do{
        if (cin >> option && option >=1 && option <=8){
            break;
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid option, please enter a number between 1 and 8" << endl;
        }
    } while (true);

    switch(option){
        case 1:
        {
            getNumbers(n1, n2, n3, n4, n5);
            cout << "\nThe sum of these numbers is: " << findSum(n1,n2,n3,n4,n5) << endl;
        break;
        }
        case 2:
        {
            getNumbers(n1, n2, n3, n4, n5);
            cout << "\nThe product of these numbers is: " << findProduct(n1,n2,n3,n4,n5) << endl;
        break;
        }
        case 3:
        {
            getNumbers(n1, n2, n3, n4, n5);
            double avg;
            findAverage(n1,n2,n3,n4,n5, avg);
            cout << "\nThe average of these numbers is: " << avg << endl;
        break;
        }
        case 4:
        {
            getNumbers(n1, n2, n3, n4, n5);
            cout <<"\nThe largest of these numbers is: " << findLarge(n1,n2,n3,n4,n5) << endl;
        break;
        }
        case 5:
        {
            getNumbers(n1, n2, n3, n4, n5);
            cout <<"\nThe smallest of these numbers is: " << findSmall(n1,n2,n3,n4,n5) << endl;
        break;
        }
        case 6:
        {
            getNumbers(n1, n2, n3, n4, n5);
            cout <<"\nThe floor of the sum of these numbers is: " << findFloor(n1,n2,n3,n4,n5) << endl;
        break;
        }
        case 7:
        {
            test();
        break;
        }
        case 8:
        default:
            return false;
    }
    return true;
}