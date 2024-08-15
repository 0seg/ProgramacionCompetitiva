#include<bits/stdc++.h>
using namespace std;

bool prime(int &n){
    if(n <= 1) return false;
    if(n <= 3) return  true;
    if(n % 2 == 0 or n%3==0) return false;
    for(int i = 5; i*i <= n;i+=6){
        if(n%i==0 or n%(i+2) == 0) return false;
    }

    return true;

}

int main(){
    int n, k;
    cin >> k;


    while(k--){
        cin >> n; 

        if(prime(n)){
            cout << "SI" << "\n";
        }else cout << "NO" << "\n";

    }




}