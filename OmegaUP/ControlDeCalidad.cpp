#include <bits/stdc++.h>
using namespace std;

bool duplicado (vector<int> vi){
   sort(vi.begin(), vi.end());
   for(int i = 1; i < vi.size(); ++i ){
    if(vi[i] == vi[i-1]){
        return true;
    }
   }
   return false;
}


int main(){
    int n;
    cin >> n;
    vector<int> vi(n);

    for(int i = 0; i < vi.size(); ++i){
        cin >> vi[i];
    }
    vector<int> viOri = vi;

    sort(vi.begin(), vi.end());

    int mi = *min_element(vi.begin(), vi.end());
    int ma = *max_element(vi.begin(), vi.end());
    
    if(viOri !=  vi || duplicado(vi)) {
        cout << "Incorrecto:" << " " << mi << " " << ma << "\n"; 
    }else{
        cout << "Correcto:" << " " << accumulate(vi.begin(), vi.end(), 0) <<" " << "pesos" <<  "\n";  
     }






}