/*
    Evan Morrison
    April 8th 2024

    Compact version of names, in a more readable format for the Apaxians.
    Replacing all consecutive runs of the same letter by a single instance of such letter.

    1. Use function designs so they can be tested individually
    2. Write a test function that automatically tests for at least three different input valyes other than the ones provided in the problem.
    3. Call test function in main and execute when "test" argyment is provided to program or main().
    4. Use a Makefile to test kattis sample input files.

    Kattis Problem: https://open.kattis.com/problems/apaxiaaans
    Alg. Steps:
        1. Read in string
        2. Find repeated letters in substring in the string
        3. Replace the repeated letters with the one letter
        4. Print out the new string.

*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;


void test();
string compact(const string &);
void uncode();

int main(int argc, char* argv[]){
    if (argc == 2 and string(argv[1]) == "test")
        test();
    else   
        uncode();
}

string compact(const string &line){
    string compact_str;
    char prev = '\0';   //set char to null character
    for (char c : line){
        if (c != prev){
            compact_str += c;
            prev = c;
        }
    }
    return compact_str;
}

void uncode(){
    string name;
    getline(cin, name);
    cout << compact(name) << endl;
}

void test(){
    assert(compact("Evvvvannn") == "Evan");
    assert(compact("Mississippi") == "Misisipi");
    assert(compact("Kaaaaaaallllliiiiiiaanaa") == "Kaliana");
    cerr << "All test cases passed!\n";
}

