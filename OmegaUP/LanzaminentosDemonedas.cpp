#include <bits/stdc++.h>
using namespace std;

void enBinario(int n, int bits){
    if(bits == 0)
        return;

    char ultimobit = n % 2 ? 'X' : 'A';
    enBinario(n/2, bits - 1);
    cout << ultimobit;



}



int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int casos = 1;

    for(int i = 0; i < n; i++){
        casos *= 2;
    }
    for (int i = 0; i < casos; i++){
        enBinario(i, n);
        cout << '\n';
    }


}