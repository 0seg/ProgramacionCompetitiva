#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ve(n);

    for(auto &x : ve){
        cin >> x;
    }

    auto m = *max_element(ve.begin(), ve.end());

    cout << m;


}