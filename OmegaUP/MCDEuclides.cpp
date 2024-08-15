#include<bits/stdc++.h> 
using namespace std;

int mcd(int n, int m){

    while (m!=0){
        int p = n%m;
        n = m;
        m=p;
    }
    
    return n;

}

int main(){
    int n, m; cin >> n >> m;

    cout << mcd(n,m) << "\n";






}