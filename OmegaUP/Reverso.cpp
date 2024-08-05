#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<int> vet;

    for(int i = 0; i < n; i++){
        int valor;
        cin >> valor;
        vet.push_back(valor);
    }

    for(int i = n-1; i >= 0; i--){
        cout << vet[i] << endl;

        
        }
}