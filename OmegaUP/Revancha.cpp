#include <bits/stdc++.h>    
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    vector<int> promedios;

    for(int i = 0; i < n; i++){
        int valor;
        cin >> valor;
        promedios.push_back(valor);
    }
    auto mi = min_element(promedios.begin(), promedios.end());
    auto m = max_element(promedios.begin(), promedios.end());
    int suma = 0;

    for(int i = 0; i < promedios.size(); i++){
        suma += promedios[i];
    }
    cout << *mi << " " << *m << " " << suma/n << endl;
    


    


}

