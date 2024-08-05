#include <iostream>
using namespace std;

int main() {

    int mensajes; 
    cin >> mensajes;

    for(int i = 1; i <= mensajes; i++){
        int corazones;
        cin >> corazones;


        for(int c = 0; c < corazones; c++){
            cout << "<3";
        }

        cout << endl;
    }

}