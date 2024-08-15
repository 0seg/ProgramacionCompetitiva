#include <bits/stdc++.h>
using namespace std;

long long  mcd(long long a, long long b){

    if(b>a){
        swap(a,b);
    }

    while (b!=0){
        long long p = a%b;
        a = b; 
        b = p;
    }
    return a;
}



int main(){
    int n; cin >> n;
    while(n--){
    long long a,b; cin >> a >> b;
    long long k = mcd(a,b);
    cout << a/k << " " << b/k << "\n";
    }

}