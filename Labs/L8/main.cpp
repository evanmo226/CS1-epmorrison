/*
    BY: Evan Morrison
    Date: April 12 2024

    The lab demonsrates the use of arrays and some operations in array.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

using big_int = long long int;

//function that reads numbers
void readData(int *, int);

//function that finds max & min numbers from given array of numbers
void findMaxAndMin(int *, int, int&, int&);

//function that finds the sum of the numbers in a given array
big_int findSum(int *, int);

//function that sorts the numbes into ascending order
void bubbleSort(int *, int);

//function that prints each element in the array
void printArray(int *, int);

// crux of the program is done in this function
void program();

int main(int argc, char* argv[]){
    char ans = 'y';
    do {
        program();
        cin.ignore(1000, '\n');
        cout << "Would you like to run this program again?[y/n]: ";
        cin >> ans;
    } while(ans == 'y');
    
    cin.ignore(1000, '\n');
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}

// crux of the program
void program(){
    size_t size;
    cout << "This program finds statistical values of some integers entered by the user.\n";
    cout << "How many numbers would you like to enter? ";
    cin >> size;
    int *nums = new int[size];
    int max, min;
    readData(nums, size);
    printf("Done reading %zu data numbers.\n", size);
    
    printArray(nums, size);
    findMaxAndMin(nums, size, max, min);
    printf("Max = %u\n", max);
    //FIXME2: Print Min value
    printf("Min = %u\n", min);  //fixed
    printf("Sum = %lld\n", findSum(nums, size));
    cout << "Sorted list in ascending order:\n";
    bubbleSort(nums, size);
    //FIXME3: print sorted array
    printArray(nums, size);         //FIXED
    delete [] nums;
}

void readData(int nums[], int size){
    cout << "You've asked to enter " << size << " integers.\n";
    for(int i = 0; i<size; i++){
        cout << "Enter an integer: ";
        cin >> nums[i];
    }
}

void printArray(int nums[], int len){
    cout << "[ ";
    for (int i = 0; i < len; i++){
        cout << nums[i] << " ";
    }
    cout << "]" << endl;
}

void findMaxAndMin(int nums[], int len, int &max, int &min){
    max = nums[0];
    min = nums[0];
    for (int i = 0; i<len; i++){
        if (max<nums[i])
            max = nums[i];
        //FIXME4: compare min with each element and update min
        if (min>nums[i])        //FIXED
            min = nums[i];
    }
}

void bubbleSort(int nums[], int len){
    int i, j, temp;
    bool sorted = false;
    for (i=0; i < len; i++){
        sorted = true;
        for (j=0; j<len-i-1; j++){
            //if two adjacent numbers are not in order, swap them
            if(nums[j] > nums [j+1]){
                //FIXME5: swap the values of nums[j] and nums[j+1]
				// can use built-in swap or implement your own swap
                temp = nums[j];         //FIXED
                nums[j] = nums[j+1];
                nums[j+1] = temp; 
                sorted = false;
            }
        }
        if (sorted) break;
    }
}

big_int findSum(int nums[], int len){
    big_int sum = 0;
    //FIXME6: iterate through nums array and add each element to sum
    for (int i =0; i<len; i++){ //FIXED
        sum +=nums[i];
    }
    return sum;
}