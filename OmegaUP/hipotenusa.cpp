#include <bits/stdc++.h>
using namespace std;


int main(){
    double cat1;
    double cat2;

    cin >> cat1;
    cin >> cat2;

    double h = pow(cat1, 2) + pow(cat2,2);
    double p = pow(h, 0.5);

    cout << fixed << setprecision(2) << p << endl; 



}