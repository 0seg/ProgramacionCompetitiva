#include <bits/stdc++.h>
using namespace std;

long long f(int n){
    if(n == 0)
        return 1;
    
    return n*f(n-1);

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    cout << f(n) << endl;

}