#include<bits/stdc++.h>
using namespace std;


int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n; 
    cin>> n;
    vector<vector<int>>  v1(n, vector<int>(n));
    vector<vector<int>> v2(n, vector<int>(n));
    vector<vector<int>> vs(n, vector<int>(n));

    for(int i= 0; i<v1.size(); i++){
        for(int q = 0; q<v1.size(); ++q){
            cin >> v1[i][q]; 
        }
    }
    for(int i = 0; i<v2.size(); i++){
        for(int q= 0; q<v2.size(); ++q)
            cin >> v2[i][q];
    }
        
    for(int i = 0; i<n; i++){
        for(int q = 0; q<n; q++){
            vs[i][q] = (v1[i][q]+v2[i][q]);
        }
    }

    for(int i = 0; i<vs.size();i++){
        for(int q = 0; q<vs.size(); q++){
            cout << vs[i][q] << " ";
        }
        cout << "\n";
    }

}