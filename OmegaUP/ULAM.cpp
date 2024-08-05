#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;

    do
    {
        cout << n << endl;
        if (n%2==0){
            n = n/2;
        }else{
            n = n*3 + 1;
        }

    } while (n != 1);
    
    cout << n << endl;

}