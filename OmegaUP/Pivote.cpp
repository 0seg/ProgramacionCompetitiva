#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i<n; i++){
        cin >> vi[i];
    }
    cin >> k;

    int m = 0, ma = 0;
    for(int i = 0; i<vi.size();i++){
        if(vi[i] < k) m++;
        if(vi[i] > k) ma++;
    }

    cout << m << " " << ma << "\n"; 



}