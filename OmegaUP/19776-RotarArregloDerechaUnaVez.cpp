#include <bits/stdc++.h>
using namespace std;

void rotar(vector<int> &vi){
    int aux= vi[vi.size()-1];
    for(int i= vi.size()-1; i>=0; i--){
        vi[i] = vi[i-1];
    }
    vi[0] = aux;
}

int main(){
    int n; cin >> n;
    vector<int> vi(n);

    for(int i = 0; i<vi.size(); i++){
        cin >> vi[i];
    }


    for(int i = 0; i < 1; i++){   
        rotar(vi);
    }


    for(auto x : vi ){
        cout << x << " ";
    }

}