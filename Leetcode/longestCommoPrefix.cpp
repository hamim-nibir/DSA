// two pointer, sorting

#include <bits/stdc++.h>
using namespace std;

#define el endl

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string ans = "";
    int n=strs.size();
        string st=strs[0],en=strs[n-1];
        for(int i=0;i<min(st.size(),en.size());i++){
            if(st[i]!=en[i]){
                return ans;
            }
            ans+=st[i];
    }
    return ans;
}

int main(){
    vector<string> strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout << ans << el;
}