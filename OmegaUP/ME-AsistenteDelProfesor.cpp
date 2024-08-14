#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >>n;
    vector<int> v2(11, 0);
    vector<int> vi(n);
    for(int i = 0; i<n; i++){
        cin >> vi[i];
        v2[vi[i]]++;
    }

    sort(vi.begin(), vi.end());
    for(int i = 0; i<vi.size();i++){
        cout << vi[i] << " ";
    }



}