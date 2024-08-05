#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    vector<vector<int>> vi(n, vector<int>(n));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> vi[i][j];
        }
    }

    int x = vi[0][0];
    bool igual = true;
    
    for(int i = 0; i<n; i++){
        if(vi[i][i] != x){
            igual = false;
            break;
            }    
    }

    bool igual1 = true;
    int y = vi[n-1][0];

    for(int i = n-1; i >= 0; i--){
        if(vi[i][i] != y){
            igual1 = false;
            break;
        }
    }

    if(igual and igual1){
        cout << "Tesoro encontrado" << "\n";
    }
    else{
        cout << "Sigue buscando" << "\n";

    }

}
