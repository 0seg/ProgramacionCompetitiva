#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }

    int b = vi.size()/2;

    int suma;
    for(int i = 0 ; i < b; i++){
        suma = vi[i] + vi[n-1-i];
        cout<< suma << " ";
    }



}