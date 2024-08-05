#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matriz(n, vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }

    int mayor = matriz[0][0];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(mayor<matriz[i][j]){
                mayor = matriz[i][j];
            }
        }
    }

    cout << mayor << "\n";

}
