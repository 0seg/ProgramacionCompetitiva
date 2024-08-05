#include <bits/stdc++.h>
using namespace std;

bool si(vector<int> &vi){
    sort(vi.begin(), vi.end());
    for(int i = 1; i <vi.size(); ++i){
        if(vi[i] != vi[i-1] +1){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    vector <int> vi(n);
    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }
    
    if(si(vi)){
        cout << "Si";
    }else{
        cout << "No";
    }

}
