#include<bits/stdc++.h>
using namespace std;



int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n,m; cin >> n;
  vector<int> v1(n);
  for(int i = 0; i<n;++i){
    cin>> v1[i];
  }
  cin >> m;
  vector<int> v2(m);
  for(int i =0; i<m; i++){
    cin>> v2[i];
  }
  vector<int> v3;
  int minsize = min(n,m);

  for(int i = 0; i<minsize;i++){
    v3.push_back(v1[i]*v2[i]);
  }
  if(m<n){
    for(int i = m; i<n;i++){
      v3.push_back(v1[i]);
    }
  }else{
    for(int i = n; i<m;i++){
      v3.push_back(v2[i]);
    }
  }

  cout << "Los elementos del vector resultante son: " <<"\n";
  for(int i=0; i<v3.size(); i++){
    cout << v3[i] << " ";
  }
  return 0;
}