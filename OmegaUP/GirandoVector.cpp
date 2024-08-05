#include <bits/stdc++.h>

using namespace std;

void corred(vector<int>& vi){
    int aux = vi[vi.size()-1];
    for(int i = vi.size()-1; i >=0; i--){
        vi[i] = vi[i-1];
    } 
    vi[0] = aux;


}


int main(){
    int n,k;
    cin >> n >> k;
    vector<int> vi(n);

    for(auto &x : vi)
        cin >> x;

    for(int i = 0; i < k; i++){
        corred(vi);
    }

    for(auto &x : vi){
        cout << x << " ";
    }
    cout << "\n";


}