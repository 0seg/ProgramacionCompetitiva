#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int cambios;

    if(a < b && b < c){
        cambios = 0;
    }
    else if(a > b && b > c){
        cambios = 1;
    }
    else if(a > c && c > b){
        cambios = 2;
    }
    else if(b > c && a > c){
        cambios = 2;
    }
    else{
        cambios = 1;
    }
    cout << cambios << endl;


}