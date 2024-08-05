#include <iostream>
using namespace std;

int main(){

    int n, pares = 0, impares = 0; 
    cin >> n;

    for(int i = 0; i < n; i++){
        int valor;
        cin >> valor;

        if(valor % 2 == 0){
            pares++;
        }
        else{
            impares++;
        } 
    }
    cout << pares << " " << impares << endl;

}