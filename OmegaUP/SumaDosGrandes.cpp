#include <bits/stdc++.h>
using namespace std;

int main(){
    int suma = 0;
    vector<int> ve(6);

    for(auto &x: ve) cin >> x;

    sort(ve.begin(), ve.end(), greater<int>());

    suma = ve[0] + ve[1];

    
    cout << suma;
    



}