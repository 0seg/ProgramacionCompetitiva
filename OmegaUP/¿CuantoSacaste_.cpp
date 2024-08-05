#include <iostream>
using namespace std;

int main() {
    int n, c1, c2, c3;
    cin >> n;
    cin >> c1 >> c2 >> c3;

    if (n > c1) {
        cout << "Soy mejor" << endl;
    } else if (n < c1) {
        cout << "Shh" << endl;
    } else {
        cout << "Te gano en la siguiente" << endl;
    }

    if (n > c2) {
        cout << "Soy mejor" << endl;
    } else if (n < c2) {
        cout << "Shh" << endl;
    } else {
        cout << "Te gano en la siguiente" << endl;
    }

    if (n > c3) {
        cout << "Soy mejor" << endl;
    } else if (n < c3) {
        cout << "Shh" << endl;
    } else {
        cout << "Te gano en la siguiente" << endl;
    }

    return 0;
}
