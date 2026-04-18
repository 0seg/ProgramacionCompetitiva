#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    int a, t = 0;
    string s;

    cin >> a;
    cin >> s;

    for (int i = 0; i < a-1; i++){
        if (s[i] == s[i+1]){
            t++;
        }
    }

    cout << t;

}

int main() {
    fastio();
    solve();
}