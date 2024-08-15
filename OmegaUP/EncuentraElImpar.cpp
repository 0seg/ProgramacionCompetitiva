#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vi;

    int n;
    while (cin >> n){
        vi.push_back(n);
    }
    

    for(int i = 0; i<vi.size(); i++){
        if(vi[i] % 2 == 1){
            cout << i+1;
            break;
        }
    }


}