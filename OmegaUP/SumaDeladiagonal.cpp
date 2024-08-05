#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, suma = 0;
    cin >> n;
    int matriz[25][25];

    for(int i = 1; i <= n ; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> matriz[i][j];
        }
    }

    for(int i = 1; i <= n; i++){
        suma += matriz[i][i];
        
    }
    cout << suma << endl;



}