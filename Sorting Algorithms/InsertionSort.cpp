#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout <<arr[i]<<" ";
    }
}

void InsertionSortA(int arr[], int size){
    for(int i=1; i<size; i++){
        int key =  arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void InsertionSortD(int arr[], int size){
    for(int i=1; i<size; i++){
        int key =  arr[i];
        int j = i-1;
        while(j>=0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {30, 2, 56, 100, 45};
    //before sorting, printing using a for-each loop
    cout << "Before Sorting : " << endl;
    for(int i : arr){
        cout <<i<<" ";
    } 
    cout << endl;
    InsertionSortA(arr, 5);
    cout << "In Ascending Order : " << endl;
    printArray(arr, 5);
    cout << endl;
    InsertionSortD(arr, 5);
    cout << "In Descending Order : " << endl;
    printArray(arr, 5);
    return 0;
}