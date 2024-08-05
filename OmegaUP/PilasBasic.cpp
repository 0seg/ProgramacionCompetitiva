#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack<int> l;

    while(n--){
        int k;
        cin >> k;
        if(k == 1){
            int p;
            cin >>p;
            l.push(p);
        }
        else if(k == 2){
            cout << l.top() << "\n";
            l.pop();

        }
        else if(k == 3){
            cout << l.size() << "\n";
        }

    }


}