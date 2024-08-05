#include <bits/stdc++.h> 
using namespace std;

int tri(int a, int b){
    return (a*b)/2;
}

int poli(int n, int a, int b){
    return (n*a*b)/2;
}

int cuadrado(int a, int b){
    return a*b;
}

int main(){

    int n, a,b;
    cin >> n >> a >> b;

    if(n == 3){
        cout << tri(a,b) << "\n";
    }
    else if(n >= 5){
        cout << poli(n,a,b) << "\n";
    }
    else if(n == 4){
        cout << cuadrado(a,b) << "\n";
    }





}