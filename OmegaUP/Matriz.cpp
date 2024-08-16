#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    vector<vector<int>> vi(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int q = 0; q<m; q++){
            cin >> vi[i][q];
        }
    }
    for(int i = n-1; i>= 0; i--){
        for(int q = 0; q < m; q++){
            cout << vi[i][q] << " ";
        }
        cout << "\n";
    }
