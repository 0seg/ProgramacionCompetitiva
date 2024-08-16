#include<bits/stdc++.h>
using namespace std;

bool si(vector<int> &vi){
    int l = 0, r = vi.size()-1;

    while (l<=r){
        if(vi[l] != vi[r]) return false;

        l++; r--;
    }
    return true;
    
}

int main(){
    int n; cin >> n;

    vector<int> vi(n);
    for(int i = 0; i<n; i++){
        cin >> vi[i];
    }
    if(si(vi)){
        cout << "SI"<<"\n";
    }else cout << "NO" "\n";



}