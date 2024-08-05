#include <bits/stdc++.h>
using namespace std;

double area(double base, double altura){
    return (base*altura)/2;
}


int main(){

    double base, altura;
    cin >> base >> altura;


    cout << fixed << setprecision(3) << area(base, altura) << " ";


}