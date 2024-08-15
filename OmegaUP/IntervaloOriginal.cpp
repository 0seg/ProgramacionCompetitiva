#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z; cin >> x >> y >> z;

    if((x <= z && z <= y)) cout << "INTERVALO" << "\n";

    if(z > x && z > y) cout << "DERECHA" << "\n";

    if(z < x && z < y) cout << "IZQUIERDA" <<"\n";


}