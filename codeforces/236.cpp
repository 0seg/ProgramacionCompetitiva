#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());

    if (st.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}

int main() {
    fastio();
    solve();
}