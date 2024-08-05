#include <bits/stdc++.h>
using namespace std;

int resultado = 0;

void dados(int d, int n){
    if(n == 0){
        cout << resultado << endl;
        return;
    }
    int pos = 1;
    for(int i = 0; i < n-1; i++){
        pos *= 10;
    }

    for(int i = 1; i <= d; i++){
        resultado += i * pos;
        dados(d,n-1);
        resultado -= i * pos;
    }

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int D,N;
    cin >> D >> N;

    dados(D,N);

      
}