#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> fila;
    int tt = 0;

    while(n--){
        int k,tacos;  
        cin >> k;
        if(k == 1){
            cin >> tacos;
            fila.push(tacos);
        }
        else if(k == 2){
            if(!fila.empty()){
                tt+= fila.front();
                fila.pop();
            }
        }
        else if(k == 3){
            cout << fila.size() << "\n";
        }
        else if(k == 4){
            cout << tt << "\n";
        }

    }




}