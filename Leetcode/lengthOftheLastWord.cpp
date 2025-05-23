#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.size()-1;
    int res = 0;
    int flag = 0;
    for(int i=n; i>=0; i--){
        if(s[i] == ' ' && flag != 0){
            break;
        }
        if(s[i] != ' '){
            flag = 1;
        }
        if(flag == 1){
            res++;
        }
    }
    return res;
}

int main(){
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s);

    return 0;
}