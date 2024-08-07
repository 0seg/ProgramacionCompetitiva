#include <bits/stdc++.h>
using namespace std;

int ba(vector<int> &vi, int &l){
    int left1=0, right1=vi.size()-1;
    while (left1 <= right1){
        int mid = left1 + (right1-left1)/2;
        if(vi[mid] == l) {
          return mid+1;}
        if(vi[mid] < l ){
            left1 =mid+1;
        } 
        else 
            right1 = mid-1;
    }
    return 0;
}


int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
  
  int n,q; cin >> n;
  vector<int> vi(n);
  for(int i = 0; i<vi.size(); i++){
    cin >> vi[i];
  }
  cin >> q;
  while(q--){
    int l;
    cin >>l;

  cout << ba(vi, l) << " " ;  
   } 



  return 0;
}