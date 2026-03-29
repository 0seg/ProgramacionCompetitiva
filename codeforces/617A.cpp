#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);



void solve() {
    int x;
    cin >> x;

    int pas = x / 5 + (x % 5 != 0 ? 1 : 0);
    cout << pas;

}

int main() {
    fastio();
    solve();
}