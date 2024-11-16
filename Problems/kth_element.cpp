#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}


//Sorted Array
int kthElem(int arr[], int size, int k){
    sort(arr, arr+size);
    // printArray(arr, size);
    return arr[k-1];

}

int main(){
    int arr[8] = {2, 10, 5, 20, 25, 19, 15, 30};
    int ans = kthElem(arr, 8, 3);
    cout << ans << endl;
    return 0;
}