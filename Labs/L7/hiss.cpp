/*
    Kattis - Hissing Microphone Problem

    By: Evan Morrison
    Date: April 4 2023

    Hissing Microphone Probelm Sttaement: https://open.kattis.com/problems/hissingmicrophone
    Algorithm steps:
    1. Read string
    2. Find "ss" substring in the string
        - if found, print "hiss"
        - otherwise, print "no hiss"
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

//function prototypes
string answer(const string &line);
void testAnswer();
void solve();

int main(int argc, char* argv[]){
    if (argc == 2 and string(argv[1]) == "test")
        testAnswer();
    else   
        solve();
}

string answer(const string &line){
    // FIXME3
    // implment algorithm step 2
    // return "hiss" if ss is found in line
    // otherwise, return "no hiss"
    if(line.find("ss") != string::npos){    //FIXED
        return "hiss";
    }
    else{
        return "no hiss";
    }
}

void testAnswer(){
    //FIXME4
    // write at least two test cases to test answer()
    assert(answer("shawty") == "no hiss");
    assert(answer("slitherin") == "no hiss");       //FIXED
    assert(answer("assert") == "hiss");
    cerr << "All test cases passed!\n";
}

void solve(){
    string line;
    // string consists of only lowercase letters (no spaces) upto 30 chars
    // FIXME5
    // read string into line
    getline(cin, line);     //FIXMED

    cout << answer(line) << endl;
}