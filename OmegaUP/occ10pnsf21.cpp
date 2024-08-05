#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    int s = 0,s1 = 0;

    for(int i = 0; i <= a.size(); ++i){
        if(isalpha(a[i])){
            s += 1;
        }
        if(isdigit(a[i])){
            s1 += 1;
        }
    }
    cout << s << " " << s1 << endl;

}