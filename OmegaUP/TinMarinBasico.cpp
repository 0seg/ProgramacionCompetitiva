#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>> n >> k;
    vector<int> vi(n);

    for(auto &x : vi)
        cin >> x;

        
    int ind = (k-1) % vi.size();



    cout << vi[ind] << "\n";


}