#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
   
    string s;
    cin >> s;
    int c = 0;


    for(int i = 0; i<s.size(); i++){
        if (s[i] == '4' or s[i] == '7') c++;
    }

    if (c == 0){
        cout << "NO";
        return;
    }

    while (c > 0){
        int d = c % 10;
        if (d != 4 and d != 7 ){
            cout << "NO";
            return;
        }
        c /= 10;
    }
    cout << "YES";
}

int main() {
    fastio();
    solve();
}