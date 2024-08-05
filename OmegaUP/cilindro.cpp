#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int main(){
    double radio, altura;

    cin >> radio;
    cin >> altura;


    double area = 2*M_PI*radio*altura + 2*M_PI*pow(radio,2);

    double volumen = M_PI*pow(radio,2)*altura;

    cout << fixed << setprecision(2) << "AREA=" << area << endl;
    cout << fixed << setprecision(2) << "VOLUMEN=" << volumen << endl;



}