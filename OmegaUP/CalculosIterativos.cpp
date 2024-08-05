#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int a,b,c, n = 0;
    cin >> a >> b >> c;

    for(int i = 1; i <= a; i += 2)
        n += i;
    
    for(int i = 1; i <= b; i *= 2)
        n -= i;
    
    while(n % c == 0){
        n /= c;
    }

    cout << n;




}
