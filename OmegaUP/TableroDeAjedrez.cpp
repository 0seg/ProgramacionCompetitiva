#include <bits/stdc++.h>
using namespace std;

int main(){
    char a; int k;
    cin >> a >> k;


    if((a == 'a' || a == 'c' || a == 'e' || a=='g')){
        if(k % 2 == 1){
            cout << "NEGRO" <<"\n";
    }   else cout <<"BLANCO" <<"\n";
    }

    else{
        if((k % 2 == 1)){
            cout << "BLANCO" <<"\n";
    }   else cout << "NEGRO" << "\n";
    }
}