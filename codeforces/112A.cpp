#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    string a,b; 
    cin >> a >> b; 

    for (int i = 0; i < a.size(); i++){
        char x = tolower((unsigned char)a[i]);
        char y = tolower((unsigned char)b[i]);

        if (x != y) {
            if (x < y) cout << -1;
            else cout << 1;
            return;
        }
    }

    cout << 0;
}

int main() {
    fastio();
    solve();
}