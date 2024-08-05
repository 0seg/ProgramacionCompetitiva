#include <bits/stdc++.h>
using namespace std;



int main(){

    int n,k; cin >> n;
    stack<int> p;

    while (n--){
        int a;
        if(a == 1){
            cin >> k;
            p.push(k);
        }
        else if(a == 2){
            if(!p.empty()){
                p.pop();
            }
        }
        else if(a == 3){
            if(p.empty()){
                cout << "Empty!" << "\n";
            }else{
                cout << p.top() << "\n";
            }
        }
    }
    

}

