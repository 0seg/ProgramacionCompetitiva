#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vi(n);
    vector<int> vi1;
    suma = 0;

    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }

    sort(vi.begin(), vi.end(), greater<int>());


    for(int i = 0; i < n; i++){
        suma += vi[i];
        vi1.push_back(suma);
    }
    
    for(auto x : vi1){
        cout << x << " ";
    }


}