#include <iostream>
using namespace std;

/*
    A B C D
    A B C D
    A B C D
    A B C D
*/

int main(){
    int n;
    cout << "Enter number of row : " << endl;
    cin >> n;
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int j=1; j<=n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}