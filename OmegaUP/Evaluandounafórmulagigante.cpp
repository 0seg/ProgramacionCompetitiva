#include <bits/stdc++.h>
using namespace std;

int main(){
    double x,y,z;
    cin >> x >> y >> z;

    double a = ((2*x) + y ) / z;
    double b = pow(y,3) - z;
    double c = (x+ 2*y + 3*z);
    double d = (z-2*y-3*x); 
    double e =  pow(x,2) + pow(z,2);

    double formula = (a*b) / ((c / d) + e);

    cout << fixed << formula << endl;




}