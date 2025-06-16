#include <bits/stdc++.h>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int> res;
    for(int i=0; i<words.size(); i++){
        string w = words[i];
        for(int j=0; j<w.size(); j++){
            if(w[j] == x){
                res.push_back(i);
                break;
            }
        }
    }
    return res;
}

int main(){
    vector<string> words = {"abc","bcd","aaaa","cbc"};
    char x = 'a';
    vector<int> res = findWordsContaining(words, x);
    for(auto elem : res){
        cout << elem << " ";
    }
    return 0;
}