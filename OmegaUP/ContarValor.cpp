#include <bits/stdc++.h> 
using namespace std;

int main(){
    int n, k; 
    cin >> n;
    vector<int> vi(n);
    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }
    cin >> k;
    int suma = 0;


    for(int i = 0; i < vi.size(); i++){
        if(k == vi[i]){
        suma++;     
        }
    }
    
    cout << suma << "\n";



}