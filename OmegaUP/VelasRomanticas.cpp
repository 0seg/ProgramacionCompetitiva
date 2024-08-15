#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,r; cin >> v >> r;
    int horas=v;

    while(v/r > 0){
        int velas = v/r;
        horas += velas; 
        v = velas +(v%r);
    }

    cout << horas << "\n";



}