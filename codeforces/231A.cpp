#include <bits/stdc++.h>
using namespace std; 

int main(){
    
    int t, a, b, c;
    int problems = 0;
    cin >> t;

    while(t--){
        cin >> a >> b >> c;
        problems += (a + b + c >= 2);
    }

    cout << problems << endl;
    
}