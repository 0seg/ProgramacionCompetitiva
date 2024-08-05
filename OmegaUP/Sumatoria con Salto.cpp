#include <bits/stdc++.h>
using namespace std;


int main(){
    int s, n;
    cin >> s >> n;
    long long suma = 0;
    for(int i = 1; i <= n; i += s){
            suma += i;
        }
    

    cout << suma << endl;

}