#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;

    if(x != y && y== z || x != z && ){
        cout << "isosceles" <<endl;
            
        }

    else if(x != y && y != z && z != x ){
        cout << "escaleno" << endl;

    }
    else cout << "equilatero";


}