#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<vector<int>> matriz (n, vector<int>(n));

    for(int i = 0; i< matriz.size(); i++){
        for(int j = 0; j < matriz.size(); j++){
            cin >> matriz[i][j];
        }

    }


    for(int i = 0; i < matriz.size(); i++){
        for(int j = matriz.size()-1; j >= 0; j--){
            cout << matriz[j][i] << " ";
        }
        cout << "\n";
    }
    




}