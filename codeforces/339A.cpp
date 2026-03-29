#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);



void solve() {
    string s, res;
    cin >> s;

    int u = 0, d = 0, t = 0;

    for (char x : s) {
        if (x == '1') u++;
        else if (x == '2') d++;
        else if (x == '3') t++;
    }

    while (u + d + t > 0) {
        if (u > 0) {
            res += '1';
            u--;
        } 
        else if (d > 0) {
            res += '2';
            d--;
        } 
        else {
            res += '3';
            t--;
        }

        if (u + d + t > 0) res += '+';
    }

    cout << res;
}

int main() {
    fastio();
    solve();
}