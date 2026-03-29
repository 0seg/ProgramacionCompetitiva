#include <bits/stdc++.h>
using namespace std;


int main(){

    int k,  v = 0;
    string s;
    cin >> k;


    while(k--){
        cin >> s;

        if (s == "++X" or s == "X++"  ) v++;
        else v--;
    }

    cout << v << endl;
}