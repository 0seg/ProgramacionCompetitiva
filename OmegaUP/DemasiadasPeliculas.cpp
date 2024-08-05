#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,n, suma = 0;
    cin >> a;
    cin >> n;

    while (n--)
    {
        int k;
        cin >> k;

        suma += k;

    }
            
    if(suma > a){
        cout << "NO" << "\n";
    }else{
        cout << "SI" << "\n";
        }

    


}