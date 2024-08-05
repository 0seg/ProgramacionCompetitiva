#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main(){
    double r;
    cin >> r;

    double a1 = r + 5;
    double a2 = pow(a1,2);
    double a3 = a2/(r/3);
    double a4 = pow(a3,3);


    cout << fixed << setprecision(6) <<  r << " " << a1 << " " << a2 << " " << a3 << " " << a4 << endl;


}