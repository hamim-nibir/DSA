#include<bits/stdc++.h>
using namespace std;

void printMat(vector<vector<int>> &mat){
    for(auto i: mat){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}
void addEdge_undirected(vector<vector<int>> &mat, int i, int j){
    mat[i][j] = 1;
    mat[j][i] = 1;
}
void addEdge_directed(vector<vector<int>> &mat, int i, int j){
    mat[i][j] = 1;
}

int main(){
    vector<vector<int>> mat(4, vector<int>(4,0));
    
    //adding edges a=0, b=1, c=2, d=3
    addEdge_undirected(mat, 0,1);
    addEdge_undirected(mat, 0,2);
    addEdge_undirected(mat, 1,2);
    addEdge_undirected(mat, 2,3);

    cout <<"adjacency matrix: " << endl;
    printMat(mat);
    return 0;
}