#include <bits/stdc++.h>
using namespace std;

vector<int> a(vector<int> &vi, int m){
    vector<int> cubeta(m,0);
    for(int i : vi){
        if(i>= 1 && i<= m ){
            cubeta[i-1]++;
        }
    }
    return cubeta;
}



int main(){
    int n,m;
    cin >> n >> m;

    vector<int> vi(n);
    for(int &q : vi){
        cin >> q;
    }
    vector<int> fre = a(vi, m);

    for(int i = 0; i<m; i++){
        cout << i+1 << ": " << fre[i] << "\n";
    }



}