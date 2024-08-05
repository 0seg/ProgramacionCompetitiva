#include <iostream>
using namespace std;

int main(){
    int n, veces = 0; 
    cin >> n;

    while(n != 1){
        n /= 2, veces++;
    }

    cout << veces << endl;

}
