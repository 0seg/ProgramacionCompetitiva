#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int matriz[15][15];

    for(int i = 0; i< n; i++){
        for(int j = 0; i < n; j++){
            cin >> matriz[j][i];
        }
    }
    for(int i =0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout << matriz [i][j] << " ";
        }
        cout << '\n';
    }
}