#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0; cin >> n;

    vector<int> vi(n);

    for(int i=0; i<vi.size();++i){
        cin >> vi[i];
    }
    int m = *max_element(vi.begin(), vi.end());
    for(int i = 0; i < vi.size(); ++i){
        while (vi[i] != m){
            vi[i] += 1;
            s++;
        }
        
        }
    

    cout << s << "\n";

}