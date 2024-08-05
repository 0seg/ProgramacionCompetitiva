#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin >> c;

    if(c < 0 or c > 10){
        cout <<"Error";
    }
    else if(c < 6){
        cout << "Reprobado";
    }
    else if(c == 6){
        cout << "Suficiente";
    }
    else if(c == 7 or c == 8){
        cout << "Bien";
    }
    else if(c == 9){
        cout << "Sobresaliente";
    }
    else{
        cout << "Excelente";
    }


}