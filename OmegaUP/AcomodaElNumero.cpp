#include<bits/stdc++.h>
using namespace std;

int ba(vector<int> &vi, int &k){
    int l = 0, r = vi.size()-1;
    while (l<=r){
        int mid = l +(r-l)/2;
        if(vi[mid] == k) return mid;
        else if( vi[mid] < k) l = mid+1; 
        else r = mid-1;
    }
    return 0;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> vi(n);
    for(int i = 0; i<vi.size(); ++i){
        cin >> vi[i];
    }
    int k = vi[0]; 

    sort(vi.begin(), vi.end());

    cout << ba(vi, k);


}
