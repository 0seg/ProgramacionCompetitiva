#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < n; i++){
        cin >> vi[i];
    }
    sort(vi.begin(), vi.end());

    for(int i = 0; i < vi.size(); ++i){
        cout << vi[i] << "\n";
    }


}