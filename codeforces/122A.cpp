#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


bool g(int x, int n){
    if (x > 1000) return false;

    if (x>0){
        if (n % x == 0) return true;
    }

    return g(x*10 + 4, n) or g(x*10 + 7, n);
}

void solve() {
   int n; 
   cin >> n;

    if (g(0, n)) cout << "YES";
    else cout << "NO";}

int main() {
    fastio();
    solve();
}