#include <bits/stdc++.h>
using namespace std;

void menor(int &n, vector<int> &vi){
    sort(vi.begin(), vi.end(),0);
    for(auto x : vi){
        cout << x << " ";
    }
}



int main(){
    int n; cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < n; i++){
        cin >> vi[i];
    }

    menor(n, vi);   

}