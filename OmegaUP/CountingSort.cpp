#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> vi;
    map<int, int> mp; 
    map<int, int>::iterator it;

    for(int i = 0; i<n;i++){
        int v;
        cin >> v; 
        mp[v]++;
    }
    vector<int> c; 
    int co= 0;
    for(it = mp.begin(); it!= mp.end();  it++){
        int key = it->first;
        int fre = it->second;
        for(int i = 0; i<fre; i++){
            vi.push_back(key);
            c.push_back(co);
        }
        co += fre;
    }

    for(auto x : vi){
        cout << x << " ";
    }
    cout << "\n";
    for(auto x : c){
        cout << x << " ";
    }



}