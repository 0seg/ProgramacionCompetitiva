#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0;
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }

    int pro = accumulate(vi.begin(), vi.end(),0)/vi.size();

    for(int i = 0; i < vi.size(); ++i){
        if(vi[i] > pro){
            c++;
        }
    }
    cout << c << "\n";


}