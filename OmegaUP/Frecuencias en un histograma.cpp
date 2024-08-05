#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m, uno;
    cin >> n >> m;
    int matriz[n][m];

    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=m; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 1; i <= m; ++i){
        uno = 0;
        for(int j = n; j > 0; --j){
            if(matriz[j][i]== 0) break;
            uno++;
        }
        cout << uno << " "; 
    }


}