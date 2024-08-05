#include <bits/stdc++.h>
using namespace std;

bool si(int &k, int &b, vector<int> &vi){
    bool par = true;
    bool impar = true;
    
    for(int i = 0; i<vi.size(); i++){
        if(i % 2 == 0){
            if(vi[i] % k != 0){
                par = false;
            }
        }else{
            if(vi[i] % b != 0){
                impar = false;
            }
        }
    }
    if(par && impar){
        cout << "explota" << "\n";
    }else{
        cout << "solo fue el susto" << "\n";
    }


} 


int main(){
    int n, k, b;
    cin >> n >> k >> b;
    vector<int> vi(n);

    for(int i = 0; i<vi.size(); ++i){
        cin >> vi[i];
    }
    
    si(k,b,vi);



}