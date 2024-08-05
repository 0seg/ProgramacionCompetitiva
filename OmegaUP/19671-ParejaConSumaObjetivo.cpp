#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k; 
    cin >> n >> k;
    vector<int> vi(n);
    bool e = false;

    for(int i=0 ; i < vi.size();i++){
        cin >> vi[i];
    }

    for(int i = 0;i<vi.size()-1;++i){
        for(f = i+1; f< vi.size();f++)
            if(vi[i]+vi[f] == k){
                cout << "Si";
                e = true;
                break;
        }
        
    }

    if(!e){
        cout << "No";
    }



}