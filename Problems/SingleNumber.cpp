#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &vec){
    //finding the single number. all numbers are mingle except one:(
    //here comes the magic of  XOR operation!
    int res = 0;
    for(int values : vec){
        res = res ^  values;
    }
    return res;
}

int main(){
    vector <int> vec = {4,1,2,1,2};
    int result =  solution(vec);
    cout  << result << endl;
    return 0;
}