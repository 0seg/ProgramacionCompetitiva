#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector<int> v1(n);
    vector<int> v2;

    for(int i= 0; i<n; i++){
        cin >> v1[i];}

    for(int i=0; i<v1.size();i++){
        if(v1[i] % 3 == 0){
            v2.push_back(i);
        }
    }

    
    if(!v2.empty()){
        cout << v2.size() << "\n";
        for(auto x : v2){
            cout << x+1 << " ";
    }
    }else cout<< "No hay triples.";




}