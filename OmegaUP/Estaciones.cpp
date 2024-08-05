#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

if(n< 1 || n > 12){
    cout << "ERROR" << endl;
}else {

    if (n == 12 || n == 1 || n == 2){
        cout << "Invierno" << endl;
    }
    else if (n >= 3 && n <= 5){
        cout << "Primavera" << endl;
    }
    else if(n >= 6 && n <= 8){
        cout << "Verano" << endl;
    }
    else if(n >= 9 && n <= 11){
        cout << "Otonio" << endl;
    }
}
    return 0;
}
