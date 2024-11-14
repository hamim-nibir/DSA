#include<set>
#include<iostream>
#include<vector>
#include<string>
#include <iostream>
#include <algorithm>
#include<map>
#include<math.h>
#include<bits/stdc++.h>
#define fo(i, strt, end) for(i=strt;strt<end?i<end:i>end;strt<end?i+=1:i-=1)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define lli long long int
#define pb push_back
#define el "\n"
#define ending return 0; 
#define minusone cout<<"-1"<<el
#define Test cout<<"Test"<<el

bool ck=false;
lli i,j;
lli M = 1000000007;
lli answer ;
#define run_fast                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void test_int(int n){
    cout<<"TEST"<<" "<<n<<endl;
}

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}
// std::ostream&
// operator<<( std::ostream& dest, __int128_t value )
// {
//     std::ostream::sentry s( dest );
//     if ( s ) {
//         __uint128_t tmp = value < 0 ? -value : value;
//         char buffer[ 128 ];
//         char* d = std::end( buffer );
//         do
//         {
//             -- d;
//             *d = "0123456789"[ tmp % 10 ];
//             tmp /= 10;
//         } while ( tmp != 0 );
//         if ( value < 0 ) {
//             -- d;
//             *d = '-';
//         }
//         int len = std::end( buffer ) - d;
//         if ( dest.rdbuf()->sputn( d, len ) != len ) {
//             dest.setstate( std::ios_base::badbit );
//         }
//     }
//     return dest;
// }

long long binMultiply(long long a,long long b){
    long long ans = 0;
    while(b > 0){
        if (b&1){
            ans = (ans+a) % M;
        }
        a = (a+a) % M;
        b >>=1;
    }
    return ans;
}

int binExp(long long a , long long b){
    int ans = 1;
    while(b > 0){
        if (b&1){
            ans = binMultiply(ans,a);
        }
        a = binMultiply(a,a);
        b >>=1;
    }
    return ans;
}

//lli dp[1000007];





int main (){
    run_fast;
    //  #ifndef ONLINE_JUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    //  #endif

    lli t;
    cin>>t;
    lli count = 0 ;
    while(t--){
       char a , b;
       cin>>a>>b;
       
    }

    // #ifdef ONLINE_JUDGE
    // fclose(stdout);
    // fclose(stdin);
    // #endif
    
return 0;

}

/*
//String Matching

#include<bits/stdc++.h>
using namespace std;

// An element Z[i] of Z array stores length of the longest substring
// starting from str[i] which is also a prefix of str[0..n-1].
// The first entry of Z array is meaning less as complete string is always prefix of itself.
// Here Z[0]=0.
vector<int> z_function(string s) {
  int n = (int) s.length();
  vector<int> z(n);
  for (int i = 1, l = 0, r = 0; i < n; ++i) {
    if (i <= r)
      z[i] = min (r - i + 1, z[i - l]);
    while (i + z[i] < n && s[z[i]] == s[i + z[i]])
      ++z[i];
    if (i + z[i] - 1 > r)
      l = i, r = i + z[i] - 1;
  }
  return z;
}
int32_t main() {
  string s;
  cin >> s;
  vector<int>  ans = z_function(s);
  for(auto x : ans) cout << x << ' ';
  return 0;
} 
*/