#include <bits/stdc++.h>
using namespace std;

void q(int a, int b, vector<int> &vi){
    for(int i = a-1; i<b; i++){
        vi[i] += 1;
    }

}

int main(){
    int n,t,a,b; cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }

    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        q(a,b,vi);
        
    }
    
    for(auto x : vi){
        cout << x << " ";
    }




}