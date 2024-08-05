#include <bits/stdc++.h>
using namespace std;

int main(){
    int suma = 0;

    for(int i = 0; i < 3; i++){
        int a,b;
        cin >> a >> b;
        suma += abs(a-b);
    }
    cout << suma;


}