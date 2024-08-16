#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k; cin >> n >> k;
    
    vector<int> vi(n);
    for(int i = 0; i<n; i++){
        cin >> vi[i];
    }

    while (k--){
        int a,b;
        cin >> a >> b;
        int s = 0;

        for(int i = a; i<=b; i++){
            s += vi[i];
        }
        cout << s << "\n";
    
    }


}