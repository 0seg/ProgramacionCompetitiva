#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,y;
    cin >> x >> y;

  

    if(x > 0 && y > 0){
        cout << "1er cuadrante";
    }else if(x<0 && y>0){
        cout << "2do cuadrante";
    }else if(x>0 && y<0){
        cout << "4to cuadrante";
    }else{
        cout << "3er cuadrante";
    }

}