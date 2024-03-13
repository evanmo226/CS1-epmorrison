/*
    Evan Morrison 
    Arrrays!!!
*/

#include <iostream>

using namespace std;

int addNums(int[], int);

int main(int argc, char* argv[])
{
    // int moreNumbers[10];

    int* heapNums = new int[10];

    for(size_t i=0; i<10; i++){
        cout << "Please enter a number: ";
        cin >> *(heapNums+i);
    }

    for(size_t i=0; i<10; i++){
        cout << "Please enter a number: ";
        cin >> *(heapNums+i);
    
    }

    for(size_t i =0; i<10; i++){
        cout << *(heapNums + i);
    }

    // int* ptr;
    // size_t arrSize = 5;

    // cout << "How many numbers do you want? ";
    // cin >> arrSize;
    // int numbers[arrSize];

    // for(size_t i = 0; i<arrSize; i++){
    //     cout << "Enter a number: ";
    //     cin >> numbers[i];
    //     if(i == arrSize-1){
    //         cout << endl;
    //     }
    // }





    // for(size_t i = 0; i <arrSize ; i++){
    //     cout << numbers[i] << " ";
    //     if(i == arrSize-1){
    //         cout << endl;
    //     }
    // }


   

    
    
    //cout << "numbers[5]: " << numbers[5] << endl;
    
    // string someStrings[100];
    // int* numPtrs[100];
    // int** moreNumPtrs[100];

    // int arrSize = 10;
    // cout << "How many hunbers do you want?";
    // cin >> arrSize;
    // int moreNumbers[arrSize];

    return 0;
}
