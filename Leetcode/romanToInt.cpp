#include <bits/stdc++.h>
using namespace std;

#define el endl

//my solution : Brute force => although it beats 100% hahah
class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'M'){
                num += 1000;
            } else if(s[i] == 'D'){
                num += 500;
            } else if(s[i] == 'C'){
                if(s[i+1] == 'M'){
                    num += 900;
                    i++;
                } else if(s[i+1] == 'D'){
                    num += 400;
                    i++;
                } 
                else{
                    num += 100;
                }
            } else if(s[i] == 'L'){
                num += 50;
            } else if(s[i] == 'X'){
                if(s[i+1] == 'C'){
                    num += 90;
                    i++;
                } else if(s[i+1] == 'L'){
                    num += 40;
                    i++;
                } else {
                    num += 10;
                }
            } else if(s[i] == 'I'){
                if(s[i+1] == 'V'){
                    num += 4;
                    i++;
                } else if(s[i+1] == 'X'){
                    num += 9;
                    i++;
                } else {
                    num += 1;
                }
            }
            else if(s[i] == 'V'){
                num += 5;
            }
        }
        return num;
    }
};


//better solution => less line of code => implement logic
class Solution {
public:
    int char2num(char a) {
        switch (a) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

    int romanToInt(string s) {
        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && char2num(s[i]) < char2num(s[i + 1])) {
                result -= char2num(s[i]);
            } else {
                result += char2num(s[i]);
            }
        }
        return result;
    }
};

int main(){
    int n;
    cin >> n;
    cout << n << el;
    return 0;
}