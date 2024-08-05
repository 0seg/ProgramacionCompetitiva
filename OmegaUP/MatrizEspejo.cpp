#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<vector<int>> vi(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> vi[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; j--){
            cout << vi[i][j] << " ";
        }
        cout << "\n";

    }






}