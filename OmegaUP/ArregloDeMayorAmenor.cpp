#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vi(5);

    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }
    sort(vi.rbegin(), vi.rend());

    for(int i = 0; i < vi.size(); ++i){
        cout << vi[i] << " ";
    }


}