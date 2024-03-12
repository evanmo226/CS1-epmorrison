/*
    Evan Morrison 
    Arrrays!!!
*/

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    size_t arrSize;
    cout << "How many numbers do you want? ";
    cin >> arrSize;

    float numbers[arrSize];

    for(size_t i = 0; i<arrSize; i++){
        cout << "Enter a number: ";
        cin >> numbers[i];
        if(i == arrSize-1){
            cout << endl;
        }
    }

    for(size_t i = 0; i <arrSize ; i++){
        cout << numbers[i] << " ";
        if(i == arrSize-1){
            cout << endl;
        }
    }


   

    
    
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
