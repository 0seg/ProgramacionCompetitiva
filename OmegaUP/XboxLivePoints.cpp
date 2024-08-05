#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sumap, res, caja; 
    cin >> n;
    
    
    for(int i = 0; i < n; i++){
        cin >> caja;
        sumap = sumap + caja; 
        
        if(sumap <= 0){ 
            sumap = 0;
        }
        res = max(res, sumap);
        
    }
    cout << res;
}