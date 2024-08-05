#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int mat [n][n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    for(int j = 0; j < n; j++){
        int columna = 0;
        for(int i = 0; i < n; i++){
            columna += mat[i][j];
        }
        cout << columna << " " <<endl;

    }





}   