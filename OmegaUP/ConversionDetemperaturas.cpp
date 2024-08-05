#include <bits/stdc++.h>
using namespace std;

int k(int c){
    return c + 273.15;

}

int f(int c){
    return ((9*(c))/5 +32);
}

int r(int c){
    return (4*(c))/5;
}


int main(){
    int c;
    cin >> c;

    cout << k(c) << " " << f(c) << " " << r(c) << "\n";


}