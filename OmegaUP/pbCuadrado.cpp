#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j]; 
        }
    }
    for(int j = 0; j < n; j++){
        for(int i = n-1; i >= 0; i--){
            cout << mat[i][j] << " ";
        }
        cout << '\n';
    }


}
