//Seection sort (both Ascending and Descending)
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout <<arr[i]<<" ";
    }
}

void SelectionSortA(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int smallest = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[smallest]){
                smallest = j;
            }
        }
        swap(arr[i], arr[smallest]);
    }
}

void SelectionSortD(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int largest = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] > arr[largest]){
                largest = j;
            }
        }
        swap(arr[i], arr[largest]);
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
    SelectionSortA(arr, size);
    cout << "In Ascending Order : " << endl;
    printArray(arr, size);
    cout << endl;
    SelectionSortD(arr, size);
    cout << "In Descending Order : " << endl;
    printArray(arr, size);
    return 0;
}