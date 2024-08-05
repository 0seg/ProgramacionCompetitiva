#include <bits/stdc++.h>    
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, suma1 = 0, suma2 = 0;
    cin >> n;
    vector<int> Boletos;



    for(int i = 0; i < n; i++){
        int boleto;
        cin >> boleto;
        Boletos.push_back(boleto);    
    }

    int mitad = Boletos.size()/2;


    for(int i = 0; i < mitad; i++){
        suma1 += Boletos[i];
    }
    for(int i = mitad; i < Boletos.size(); i++){
        suma2 += Boletos[i];
    }

    if(suma1 == suma2){
        cout << suma1<< " " << "1" << endl;
    }else{
        cout << suma1+suma2 << " " << "0" << endl; 
    }

    


}

