//Optimized Bubble sort (both Ascending and Descending)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout <<arr[i]<<" ";
    }
}

void BubbleSortA(int arr[], int size){
    bool isSwapped = false;
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){ // array is already sorted : checked in the 1st iteration
            return;
        }
    }
}

void BubbleSortD(int arr[], int size){
    bool isSwapped = false;
    for(int i=0; i< size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){ // array is already sorted : checked in the 1st iteration
            return;
        }
    }
}

int main(){
    int arr[10];
    int  size = 10;

    cout << "Enter 10 numbers :" << endl;
    for(int i=0; i<10; i++){
        cin  >>arr[i];
    }

    //before sorting, printing using a for-each loop
    cout << "Before Sorting : " << endl;
    for(int i : arr){
        cout <<i<<" ";
    } 
    cout << endl;
    BubbleSortA(arr, size);
    cout << "In Ascending Order : " << endl;
    printArray(arr, size);
    cout << endl;
    BubbleSortD(arr, size);
    cout << "In Descending Order : " << endl;
    printArray(arr, size);
    return 0;
}