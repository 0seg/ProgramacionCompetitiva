#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); i++){
        cin >> vi[i];
    }

    sort(vi.begin(), vi.end());


    bool si = true;
    for(int i = 0; i < vi.size()-1; i++){
        if(vi[i]+1 != vi[i+1]){
            si = false;
            break;
        }

    }

    if(si){
        cout << "SI";
    }else{
        cout << "NO";
    }

    

}