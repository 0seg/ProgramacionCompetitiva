#include <bits/stdc++.h>
using namespace std;



double area(double r){
    return 3.14159 * (r*r);
}


int main(){
    double r;
    cin >> r;

    cout << fixed << setprecision(2) << area(r)<< "\n"; 


}