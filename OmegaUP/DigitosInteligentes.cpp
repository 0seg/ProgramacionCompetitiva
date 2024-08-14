#include <bits/stdc++.h>
using namespace std;

int v(int &f, int &e){
    int total = 0;
    for(int i=f; i<=e; i++){
        int num = i;
        while (num>0){
            total += num%10;
            num /= 10;
        }
        }
        return total;
}



int main(){
    int c, f, e;
    cin >> c;


    while (c--){
        cin >> f >> e;
        
        int value = v(f,e);

        cout << value << "\n";


    }
    



}