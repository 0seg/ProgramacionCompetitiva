#include <iostream>
using namespace std;


int main() {
    int n, p, p1, p2;
    cin >> n >> p; 

    p %= 3;

    int adelante = (n+p) % 3; 
    if(adelante == 0) adelante = 3;

    int atras = (n - p + 3) % 3;
    if(atras == 0) atras = 3;
 
    cout << atras << " " << adelante << endl;


    return 0;
}


