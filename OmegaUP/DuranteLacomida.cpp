#include <bits/stdc++.h>
using namespace std;

int main(){
    string palabra;
    cin >> palabra;
    int m=0,i=0,g=0,u=0,e=0,l=0;

    for(int j = 0; j < palabra.size(); j++){
        if(palabra[j] == 'm') m++;
        if(palabra[j] == 'i') i++;
        if(palabra[j] == 'g') g++;
        if(palabra[j] == 'u') u++;
        if(palabra[j] == 'e') e++;
        if(palabra[j] == 'l') l++;
     }
    int veces= min({m,i,g,u,e,l});

    cout << veces << endl;
}