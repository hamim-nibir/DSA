//solved this using brute force approach, but fails in bigger numbers, out of range problem.

#include<bits/stdc++.h>
using namespace std;

    //step-1:
    int binToDec(string str){
        int p =0;
        int dec = 0;
        for(int i=str.size()-1; i>=0; i--){
            int num = str[i] - '0'; //converting ith character to number
            dec = dec + (num * pow(2,p));
            p++;
        }
        return dec;
    }
    //step-2:
    string decToBin(int num){
        string bin = "";
        while(num>0){
            int rem = num%2; //extracting the reminder
            num = num/2; 
            char ch = rem + '0';
            bin = bin+ch;
        }
        //reversing the string
        int st = 0, en = bin.size()-1;
        while(st<en){
            swap(bin[st], bin[en]);
            st++;
            en--;
        }
        return bin;
    }
    string addBinary(string a, string b) {
        //base case : both a and b is 0
        if(a == "0" && b== "0"){
            return "0";
        }

        /*step-1:convert a and b to decimal
          step-2: add decimal a and b
          step-3: convert the decimal result into binary and return it as a string
        */
        int num1 = binToDec(a);
        int num2= binToDec(b);
        int num3 = num1+num2;
        string res = decToBin(num3);

        return res;
    }

int main(){
    string a = "11";
    string b = "1";
    cout << binToDec(a) << endl;
    cout << binToDec(b) << endl;
    cout << decToBin(10) << endl;
    cout << addBinary(a,b);
}