/*
    Evan Morrison
    April 15, 2024

    Solve Kattis Problem - Falling Apart: https://open.kattis.com/problems/fallingapart

    1. Find out how long the array is from an input
    2. Get the array length from input
    3. Have entered array from input
    4. Use a function to find max and then add it to each individuals sum.
        a) if even, first output, if odd, second output
        b) after use, set place to zero.
    5. Once the max == 0, break function
    6. output each individual scores, seprated by a space
*/

#include <iostream>
#include <cassert>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

using big_int = long long int;

void readArray(int *, int);
void addBig(int *, int, int &, int &);
void program();
void test();

int main(int argc, char* argv[]){
    if (argc == 2 and string(argv[1]) == "test")
        test();
    else   
        program();
}

void program(){
    size_t size;
    cin >> size;
    int *nums = new int[size];
    int A = 0;
    int B = 0;
    readArray(nums, size);
    addBig(nums, size, A, B);
    cout << A << " " << B << endl;
}

void readArray(int nums[], int size){
    for(int i = 0; i<size; i++){
        cin >> nums[i];
    }
}

void addBig(int nums[], int size, int &A, int &B){
    int count = 0;
    int big = 1;
    while(big != 0){
        int place = 0;
        big = nums[0];
        for (int i = 0; i<size; i++){
            if(big<nums[i]){
                big = nums[i];
                place = i;
            }
        }
        nums[place] = 0;
        if (count%2 == 0){
            A += big;
        }
        else {
            B+= big;
        }
        count++;
    }
}

void test(){
    // tests 1
    int size = 3;
    int A = 0;
    int B = 0;
    int *nums = new int[size] {1, 4, 2};
    addBig(nums, size, A, B);
    assert(A == 5);
    assert(B == 2);

    // test 2
    size = 5;
    A = 0;
    B = 0;
    nums = new int[size] {1, 5, 9, 2, 3};
    addBig(nums, size, A, B);
    assert(A == 13);
    assert(B == 7);

    // test 3
    size = 4;
    A = 0;
    B = 0;
    nums = new int[size] {5, 6, 2, 4};
    addBig(nums, size, A, B);
    assert(A == 10);
    assert(B == 7);
    cout << "All test cases passed!" << endl;
}