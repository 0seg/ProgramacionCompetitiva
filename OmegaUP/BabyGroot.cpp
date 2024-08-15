#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> vi(n);

    for(int i = 0; i<vi.size(); ++i){
        cin >> vi[i];
    }
    if(k == vi[vi.size()-1]){
        cout << "TODOS VAMOS A MORIR" <<"\n";
    }else cout << "SALVADOS" << "\n";
 

}