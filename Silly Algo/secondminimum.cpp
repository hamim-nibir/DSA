/*Finding 2nd smallest element from an array without sorting*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3, 3, 4, 5};
    int min1 = arr[0], min2 = 0;
    if (arr[0] < arr[1]){
        min1 = arr[0];
        min2 = arr[1];
    } else {
        min1 = arr[1];
        min2 = arr[0];
    }
    for (int i = 2; i < 4; i++){
        if (arr[i] < min1){
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    cout << min2;
    return 0;
}