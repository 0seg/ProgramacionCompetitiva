#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vi(n);

    for(auto &x : vi)
        cin >> x;


    int ma = *max_element(vi.begin(), vi.end());
    int c = 0;    

    for(int i = 0; i < vi.size(); i++){
        if(vi[i] == ma)
            c++;

    }
    cout << c << "\n";



}