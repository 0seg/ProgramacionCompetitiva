#include <iostream>
using namespace std;

int main(){
    int k, p = 2;
    cin >> k;

    while(k){
    
    bool primo = true;
    for(int i = 2; i < p; i++){
        if(p % i == 0){
            primo = false;

        }
    }
    if(primo)
        k--;
    p++;
    }
    cout <<(p-1) << endl;
}