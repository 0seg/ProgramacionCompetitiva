#include <bits/stdc++.h>
using namespace std;

int div(int n){
    int div = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            div++;
        }
    }
    return div;

}

int main(){
    int n;
    cin >> n;

    cout << div(n) << "\n";

}