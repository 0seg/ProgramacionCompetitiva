#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k = 0, suma =0;
    cin >> n;

    while(suma < n){
        k++, suma += k + 7;
    }
    cout << k;

}