#include <bits/stdc++.h>
using namespace std;

void pri(int n){
    int a = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            a++;
        }
    }
    if(a == 2){
        cout << "Si" << "\n";
    }else{
        cout << "No" << "\n";
        
    }


}

int main(){
    int n;
    cin >> n;

    pri(n);

}