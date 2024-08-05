#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int suma = 0;
    int x,y,z;
    vector<int> valores;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;
        suma = x+y+z;
        valores.push_back(suma);
        
        }

    for(int j = 0; j < valores.size(); j++){
        cout << valores[j] << endl;
    }


}