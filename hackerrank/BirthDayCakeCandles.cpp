#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, s = 0; 
    cin >> n;
    vector<int> r(n);


    for(auto &x : r) cin >> x;

    auto max = max_element(r.begin(), r.end());
    int m = *max;
    
    for(int i = 0; i < n; i++){
        if(r[i] == m){
            s += 1;
        }
    }
    return s;

}