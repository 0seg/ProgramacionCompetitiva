#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n,m; 
    cin >> n >> m;

    int matriz[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            cin >> matriz[i][j];
        }
    }
    vector<int> vi;


    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; --j){
            if(i % 2 == 0 and j % 2 == 0){
                vi.push_back(matriz[i][j]);
            }
        }
    }


    for(int i = vi.size()-1; i >= 0; --i){
        cout << vi[i] << " ";
    }




}