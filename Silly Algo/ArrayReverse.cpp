#include<bits/stdc++.h>
using namespace std;

void printElements(vector <int> &vec){
    for(int val : vec){
        cout << val << " ";
    }
}

void Reverse(vector <int> &vec){
    int start = 0;
    int end =  vec.size() - 1;
    while(start < end){
        swap(vec.at(start), vec.at(end));
        start++;
        end--;
    }
}

int main(){
    vector <int> vec = {30,25,20,15,10,5};
    Reverse(vec);
    printElements(vec);


    return 0;
}