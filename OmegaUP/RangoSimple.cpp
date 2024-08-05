#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vi(n);
    
    for(int i = 0; i<vi.size(); i++){
        cin >> vi[i];
    }
    int a,b, count = 0;
    cin >> a >> b;

    for(int i = 0; i < vi.size(); i++){
        if(vi[i] >= a and vi[i] <= b){
            count++;
        }

    }
    cout << count << "\n";


}