#include <bits/stdc++.h>
using namespace std;
#include <cmath>




    int main(){
        double x,y,z;
        cin >> x >> y >> z;
        double calculo = (x + x*(y + (z*z))) / ((x + M_PI)*(y+M_PI));

        cout << fixed << setprecision(6) <<  calculo <<endl;


    }