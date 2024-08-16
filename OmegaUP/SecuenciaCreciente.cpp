#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vi;
    int k;
    while(cin >> k){
        vi.push_back(k);
    }
    int s = 0;

    for(int i=0; i<vi.size()-1; i++){
        s++;
        if(vi[i+1] < vi[i]){
            cout << s;
            return 0;
        }
    }
}