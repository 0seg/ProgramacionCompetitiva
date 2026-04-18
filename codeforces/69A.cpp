#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);


void solve() {
   
    int x, y, z, n;
    cin >> n;   
    int sumx = 0, sumy = 0, sumz = 0;

    
    for (int i = 0; i < n; i ++){
        cin >> x >> y >> z;
        sumx += x;
        sumy += y;
        sumz += z;
    }

    if (sumx == 0 and sumy == 0 and sumz == 0) cout << "YES";
    else cout << "NO";

    

}

int main() {
    fastio();
    solve();
}