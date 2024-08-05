#include <iostream>
using namespace std;

int main(){
    int n, a = 0, j=0,  p1 = 0, p2 = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int valores;
        cin >> valores;

        if(valores % 2 == 0){
            a += valores;
            p1++;
        }else{
            j += valores;
            p2++;
        }
        }

        if(p2*a == p1*j){
            cout << "EMPATE!" << endl;
        }
        else if(a*p2 > p1*j){
            cout << "APARICIO" << endl;
        }
        else{
            cout << "NONILA" << endl;
            }

   



}