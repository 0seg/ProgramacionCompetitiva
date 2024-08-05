#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    char b;
    cin >> b >> a;

    if(b != 's'){
        cout << "estas a salvo!";
    }
    else if(b == 's' and a >= 10 ){
        cout << "retrocede y busca otro camino";
    }
    else{
        cout << "corre, corre por tu vida!";    
    }

}