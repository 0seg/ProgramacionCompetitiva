#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, pos=0, neg=0;
    cin >> n;

    vector<int> vi(n);

    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }
    
    for(int i = 0; i < vi.size(); i++){
        if(vi[i] < 0){
            neg++;
        }
        else if(vi[i] > 0){
            pos++;
        }
    }

    cout << pos << " " << neg << "\n";

    


}