#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,s,b;
    cin >> r >> s >> b;

    int asientos = r*s;
    int sentados, parados;


    if (b <= asientos){
        sentados = b;
        parados = 0;

    }else{
        sentados = asientos;
        parados = b - asientos;
    }
    cout << sentados << " " << parados << endl;
}