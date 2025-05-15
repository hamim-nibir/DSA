#include<bits/stdc++.h>
using namespace std;

int decToBIn(int dec){
    int ans = 0;
    int pow = 1; // 10^0
    while(dec>0){
        int rem = dec % 2;
        dec = dec / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int binToDec(int bin){
    int ans = 0;
    int pow = 1;  // 2^0
    while(bin > 0){
        int lastDigit = bin % 10;
        ans += (lastDigit * pow);
        bin = bin / 10;
        pow = pow * 2;
    }
    return ans;
}

int main (){
    int dec;
    cin >> dec;
    int bin = binToDec(dec);
    cout << bin << endl;
    return 0 ;
}


/*
    two's compliment => to store a negative number in memory
    steps : to store -10 in memory
    => convert the decimal number 10 into binary => 1010
    => add prefix 0 (msb) => 01010 => msb 0(means + number), msb 1(means negaative number)
    => make 1's compliment => flip all the nummbers => 10101
    => add 1 => 10101 + 1 = 10110 (-10)
*/