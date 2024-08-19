#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> set1,set2;
    int a,b; 
    cin >> a >> b;
    for(int i = 0; i<a; ++i){
        int l; cin >> l;
        set1.insert(l);
    }
    for(int i = 0; i<b; i++){
        int l; cin >> l;
        set2.insert(l);
    }

    if(includes(set1.begin(), set1.end(), set2.begin(), set2.end()) || includes(set2.begin(), set2.end(), set1.begin(), set1.end())){
        if(set1.size() > set2.size()){
            cout << "A > B";
        }
        else if(set1.size() < set2.size()){
            cout << "A < B";
        }
        else cout << "A = B";
    }else cout << "A != B";

}


