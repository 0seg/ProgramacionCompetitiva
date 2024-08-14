#include<bits/stdc++.h>
using namespace std;

bool si(string &t){
    int l = 0, r = t.size()-1;
    while (l<=r){
        if(t[l] != t[r]) return false;
        
        l++; r--;
    }
    return true;
}

int main(){
    string t;

    cin >> t;

    if(si(t)){
        cout << "Si" <<"\n";
        
    }else cout << "No" << "\n";

}