#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> res;
    int num=0;
    //making the number with the given digits
    for(int i=0; i<digits.size(); i++){
        num = (num*10) + digits[i];
    }
    //increment the number by one
    num++;
    //then again, seperating the digits and pushing those to the result array
    while(num>0){
        int d = num%10;
        num/=10;
        res.push_back(d);
    }
    //reversing the result vector
    int start = 0;
    int end =  res.size() - 1;
    while(start < end){
        swap(res.at(start), res.at(end));
        start++;
        end--;
    }
    return res;
}

//aproach was write, but couldn't get ac. because of 100 digits integer!!!!


int main(){
    vector<int> digits = {1,2,3};
    vector<int> res = plusOne(digits);
    for(auto elem : res){
        cout << elem << " ";
    }
    return 0;
}