#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> vi(n,0);

    int t;
    cin >> t;
    while(t--){
        int k,l;
        cin >> k >> l;
        for(int i= k; i<l; i++){
            vi[i] += 1;
        }
    }

    for(auto x : vi){
        cout << x << " ";
    }


}