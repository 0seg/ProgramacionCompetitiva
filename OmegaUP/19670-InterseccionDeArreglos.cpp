#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m; 
    vector<int> p;

    cin >> n;
    vector<int> vi(n);
    for(int i = 0; i< vi.size(); i++){
      cin >> vi[i];
    }
    cin >> m;
    vector<int> vi1(m);
    for(int i = 0; i<vi1.size(); i++){
      cin >> vi1[i];
    }


    for(int i = 0; i<vi.size(); i++){
        for(int f = 0; f< vi1.size(); f++){
            if(vi[i] == vi1[f]){
                if(p.back() != vi[i]){
                    p.push_back(vi1[f]);
                }
            }
        }
    }


    if(p.size() == 0){
      cout << "-1";
    }else{
      for(auto x : p){
          cout << x << " "; 
      }
    }
}

