#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);



void solve() {
    long long int a, b, c, total = 0;
    cin >> a >> b >> c;

    total = a * (c*(c+1)/2);

    if(total <= b) cout << 0;
    if (total > b) cout << total - b;

}

int main() {
    fastio();
    solve();
}