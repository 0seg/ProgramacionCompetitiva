#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a > b){
        cout << "gato A";
    }else if(c < a || c < b){
        cout << "raton C";
    }
    else{
        cout << "gato B";
    }
    



}