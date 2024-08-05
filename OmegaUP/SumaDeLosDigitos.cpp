#include <bits/stdc++.h>
using namespace std;

int main(){
    string secuencia;
    cin >> secuencia;
    int suma = 0;

    for(char i : secuencia){
        suma += i - '0';
    }
    cout << suma << endl;

}
 
