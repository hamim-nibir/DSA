/*
* Static Array list
* OPs: Print, update, search, insert, delete
*/

#include<bits/stdc++.h>
#define el "\n"

using namespace std;

int main(){
    int size=1;
    cout << "Enter the size of the array: " << el;
    int arr[size];

    while(1){
        int choice;
        cout << "Menu: " << el;
        cout << "1. Print Array" << el;
        cout << "2. Update" << el;
        cout << "3. Insert" << el;
        cout << "4. Delete" << el;
        cout << "5. Search" << el;
        cout << "0. Exit" << el;

        cout << "Enter you choice: ";
        cin >> choice;
        switch(choice) {
            case 0: {
                cout << "Exited..." << el;
                return 0;
            }
            break;
            case 1: {
                cout << "Printed array is: " << el;
                for(int i=0; i<size-1; i++){
                    cout << arr[i] << " ";
                }
                cout << el;
                cout << el;
            }
            break;
            case 2: {
                cout << "Enter the index number : ";
                int x;
                cin >> x;
                cout  << "Enter the value to update: ";
                int val;
                cin  >> val;
                bool isUpdated = false;
                for(int i=0; i<size-1; i++){
                    if(i==x){
                        arr[i] = val;
                        isUpdated = true;
                    }
                }
                if(isUpdated == false){
                    cout << "Index out of range" << el;
                }
                cout << el;
                cout << el;
            }
            break;
            case 3: {
                int val;
                cout <<  "Enter the value to insert: ";
                cin >> val;
                if(size == 1){
                    arr[0] = val;
                    size++;
                } else {
                    arr[size-1] = val;
                    size++;
                }
            }
            break;
            case 4: {
                cout << "Delete code will be implemented later :)" << el;
                cout << el;
                cout << el;
            }
            break;
            case 5: {
                cout << "Enter the value to search: ";
                int val;
                cin >> val;
                bool  isFound = false;

                for(int i=0; i<size-1; i++){
                    if(arr[i] == val){
                        cout << "Value found at index " << i << el;
                        isFound = true;
                        break;
                    }
                }
                if(isFound == false){
                    cout << "Value not found" << el;
                }
                cout << el;
                cout << el;
            }
        }
    }
    return 0;
}