#include <bits/stdc++.h>
using namespace std;


void a(vector<long long> &vi, long long &n){
    bool par = false;
    for(int i = 0; i<vi.size(); i++){
        if(vi[i] % 2 ==0){
            par = true;
            cout << "[" << vi[i] << "]" << " ";
        }
    }
    if(!par){
        cout << ":(" << "\n";
    }
}

int main(){
    long long n; cin >> n;
    vector<long long> vi(n);

    for(int i = 0; i<vi.size();i++){
        cin >> vi[i];
    }

    a(vi,n);


}