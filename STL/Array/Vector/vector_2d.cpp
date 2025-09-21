#include<bits/stdc++.h>
using namespace std;

void printVector(vector<vector<int>> &vec){
    for(auto rows: vec){  //traverse each rows
        for(auto elem : rows){ //traverse each value of that row
            cout << elem << " ";
        }
        cout << endl;
    }
    /*using for loop
        will try it later
    */
}

int main(){
    //normal
    vector<vector<int>> vec; //vector<vector<data_type> name;

    // with user defined size and default value
    vector<vector<int>> vec2(4, vector<int>(3,0)); //vector<vector<int>> vec(rows, vector<data_type> cols, default_value);

    //initialization with initializer list
    vector<vector<int>> vec3 = {{1,2,3}, {4,5,6}};

    //insertion
    //insert a new row at the end
    vec.push_back({7,8,9});
    //insert 10 into 2nd row 3rd column
    vec[0].insert(vec[0].begin()+2, 10);

    //accessing and updating elements
    cout << vec3[1][0] << endl;
    vec3[1][0] = 50;

    //deletion
    //deleting a row
    vec2.erase(vec2.begin()+1);

    // Delete second element in first row
    vec2[0].erase(vec2[0].begin() + 1);
    

    cout << "vector 1:" << endl;
    printVector(vec);
    cout << "vector 2:" << endl;
    printVector(vec2);
    cout << "vector 3:" << endl;
    printVector(vec3);

    return 0;
}