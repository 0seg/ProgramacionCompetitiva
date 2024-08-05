#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long int n, suma = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){
        suma += i*i;

    }
    cout << suma << endl;


    }