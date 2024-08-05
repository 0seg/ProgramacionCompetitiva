#include <bits/stdc++.h>
using namespace std;


void binario(int n){
    if(n == 0)
        return;
    
    int bit = n % 2;
    binario(n/2);

    cout << bit << " ";


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    binario(n);

      
}