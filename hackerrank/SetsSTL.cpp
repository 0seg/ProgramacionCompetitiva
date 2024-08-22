#include<bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int n; cin >> n;
    while (n--) {
        int a,b;
        cin >> a;
        if(a == 1){
            cin >> b;
            s.insert(b);
        }
        else if(a==2){
            cin >> b;
            s.erase(b);   
            
            
        }   
        else if(a == 3) {
            cin >> b;
            set<int>::iterator it = s.find(b);
            if(it != s.end()){
                cout << "Yes" <<"\n";
            }else cout << "No" << "\n";
        }
    }
}

