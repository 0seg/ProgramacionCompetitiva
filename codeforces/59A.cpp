#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);



void solve() {
    string s;
    string res = "";

    cin >> s;
    int ma = 0, mi = 0;


    for (auto x : s){
        if (islower(x)) mi++ ;
        else ma++; 
        res += x;
    }

    if(ma > mi){
        for(char &c : res) c = toupper(c);
    } else {
        for(char &c : res) c = tolower(c);
    }

    cout << res;
}

int main() {
    fastio();
    solve();
}