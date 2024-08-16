#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    vector<int> vi;
    while (cin >> n){
        vi.push_back(n);
    }

    int s = 1;
    for(int i = 0; i<vi.size()-1;i++){
        if((vi[i] % 2 == 0 && vi[i+1] % 2 != 0 ) || ((vi[i]% 2 !=0 && vi[i+1] % 2 == 0))){
            s++;
        }else break;

     }
    cout << s;

    


}