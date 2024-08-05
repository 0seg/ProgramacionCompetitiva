#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)){
        cout << "Si";
    }
    else cout << "No";


}