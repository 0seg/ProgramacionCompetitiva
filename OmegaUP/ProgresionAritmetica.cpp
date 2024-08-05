#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    long long suma = 0;

    for(int i = 0; i < c; i++){
        suma +=  (a + i*b);
    }

    cout << suma << endl;
}