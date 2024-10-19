#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,  int target){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {4, 230, 45, 20, 10, 100, 60 , 70, 33, 22};
    int match =  LinearSearch(arr, 10, 100);
    if(match == -1){
        cout << "Element not found! \n";
    } else {
        cout << "Element found at index " << match << "\n";
    }

}