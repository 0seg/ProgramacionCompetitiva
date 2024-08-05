#include <bits/stdc++.h>
using namespace std;

long long f(int n){
    if(n<=5)
        return 1;

    return 5*f(n-2);
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;

    cout << f(n) << endl;

}