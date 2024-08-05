#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    if(a == b + c){
        cout << "SI" << " " << b;
    }else{
        cout << "NO";
    }
    if(c == a+b){
        cout << "SI" << " " << c;
    }else{
        cout << "NO";
    }
    if(b == a+c){
        cout << "SI" << " " << a;
    }else{
        cout << "NO";
    }



}