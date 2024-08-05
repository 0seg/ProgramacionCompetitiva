#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    int suma = 0, count = 0;


    for(int i = 0; i < n; ++i){
        int l;
        cin >> l;
        suma += l;
        count++;
        if(suma >= c){
            cout << count << "\n";
            return 0;
        }

    }
    


}