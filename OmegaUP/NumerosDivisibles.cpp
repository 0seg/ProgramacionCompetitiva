#include <bits/stdc++.h>
using namespace std;


int div(int k, vector<int> &vi){
    int s = 0;
    for(int i = 0; i < vi.size(); i++){
        if(vi[i] % k == 0){
            s++;
        }
    }
    return s;

}



int main(){
    int n, k;
    cin >> n >> k;

    vector<int> vi(n);
    for(int i = 0; i <n; i++){
        cin >> vi[i];
    }

    int a = div(k, vi);

    cout <<  a  << "\n";



}
