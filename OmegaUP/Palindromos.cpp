#include <bits/stdc++.h>
using namespace std;

bool si(char palabra[], int longitud){
    for(int i = 0; i < longitud; i++){
    if(palabra[i] != palabra[longitud-i-1])
        return false;
    }
    return true;

}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char palabra[1001];
        cin >> palabra;

        int longitud = strlen(palabra);
        
        cout << (si(palabra, longitud) ? "P" : "NP") << endl;

    }

    

    



}