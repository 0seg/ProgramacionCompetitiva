#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }

    for(int i= 0; i < vi.size(); i++){
      if(i +1 >= vi.size()) break;
      if(vi[i] == vi[i+1]){
        vi.erase(vi.begin() + i+1);
          --i;
        }
      
    }

    for(auto x : vi){
        cout << x << " ";
    }