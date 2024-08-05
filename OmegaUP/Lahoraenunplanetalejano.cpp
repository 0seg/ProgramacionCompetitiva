#include <bits/stdc++.h>
using namespace std;

int main(){
    int s;
    cin >> s;

    int min = 50;
    int hora = 70 * min;
    int dia = 12 * hora;
    

    int dias = s / dia;
    s %= dia;
    int horas = s / hora;
    s %= hora;
    int minutos = s / min;
    s %= min;

    cout << dias << " " << horas << " " << minutos<< " " << s << endl;
    

}