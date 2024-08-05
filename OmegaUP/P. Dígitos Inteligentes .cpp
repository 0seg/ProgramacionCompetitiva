#include <bits/stdc++.h>
using namespace std;

int  separar(int numero){
    int suma = 0;


    while (numero != 0)
    {
        suma += numero % 10;
        numero /= 10;
    
    }
    return suma;


}



int main(){
    int t; cin >> t;
    int sumatotal= 0;


    while (t--){
        int a,b;
        cin >> a >> b;

        for(int i = a; i<= b; ++i ){
            sumatotal+=separar(i);
        }


        cout << sumatotal << "\n";

    }
    


}