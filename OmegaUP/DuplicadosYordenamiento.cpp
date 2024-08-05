#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vi(n);

    bool negativo = false;
    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
        if(vi[i]<0){
            negativo = true;
        }

    }
    if(negativo){
        return 0;
    }

    sort(vi.begin(), vi.end());

    for(int i = 0; i<vi.size(); i++){
        if(i+1>=vi.size()) break;
        if(vi[i] == vi[i+1]){
            vi.erase(vi.begin() + i+1);
        }
    }


    for(auto x : vi){
        cout << x << "\n";
    }
}