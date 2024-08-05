#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, suma = 0;
    cin >> c;
    vector<int> vi(c);


    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];

    }
    for(int i = 0; i < vi.size()-1; ++i){
        suma += vi[i];
    }


    if(suma == vi[vi.size()-1]){
        cout << "1" << "\n";
    }else{
        cout << "-1" << "\n";
        
    }



}