#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;

    vector<vector<int>> vi(n, vector<int>(m));
    
    int l = 1;

    for(int i = 0; i<n; i++){
        if(i % 2 == 0){
            for(int q = 0; q<m; q++){
                vi[i][q] = l;
                l++;
        }

        }else{
            for(int q = m-1; q>=0; q--){
                vi[i][q]=l;
                l++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int q = 0; q < m; q++){
            cout << vi[i][q] << " ";
        }
        cout << "\n";
    }



    
}