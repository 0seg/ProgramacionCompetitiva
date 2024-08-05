#include <bits/stdc++.h>
using namespace std;

int p(int n){
    int x = n*n;

    if(x % 3 == 0)
        return x+1;
    else
        return x;
}

int main(){
    int n; cin >> n;

    cout << p(n) << "\n" ;

}