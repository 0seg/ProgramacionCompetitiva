#include <bits/stdc++.h>
using namespace std;

void si(int &w, vector<int> &vi){
    if(find(vi.begin(), vi.end(), w) != vi.end()){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }

}

int main(){
    int w, t, n; cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }
    cin >> t;


    while (t--)
    {
        cin >> w;
        si(w,vi);

    }
    

}