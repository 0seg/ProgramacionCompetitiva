#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    cin >> n;
    int pasos = 0;
    vector<int> numeros;

    numeros.push_back(n);

    while(n != 1){
        if(n % 2 == 0){
            pasos++;
            n = n/2;
            numeros.push_back(n);
        }
        else{
            pasos++;
            n = (n*3) + 1;
            numeros.push_back(n);
        } 

    }
    int maxv = *max_element(numeros.begin(), numeros.end());


    cout << pasos << " " << maxv << endl; 




}