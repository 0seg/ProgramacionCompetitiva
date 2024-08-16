#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> vi(n, vector<int>(n));

    for(int i = 0; i<n; ++i){
        for(int q = 0; q<n; q++){
            cin >> vi[i][q];
        }
    }


    bool sime = true;
    for(int i = 0; i<n; i++){
        for(int q = 0; q<n; q++){
            if(vi[i][q] != vi[q][i]){
                sime = false;
                break;
                }
            }
        }
    

    if(sime){
        cout << "SI" << "\n";
    }else cout << "NO" << "\n";



}