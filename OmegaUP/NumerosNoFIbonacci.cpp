#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a = 0, b = 1, c = 1;

    for(int i = 1; i < n; i++){
        if(i < c){
            cout << i << " ";
        } else if(i == c){
        a = b, b = c, c = a + b;
        }
    }



}