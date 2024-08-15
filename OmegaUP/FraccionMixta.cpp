#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin >> a >> b;


    int n = a%b; 
    int k = a/b;

    
    if(n == 0){
        cout << k;
    }else cout << k << " " << n << "/" << b;




}
