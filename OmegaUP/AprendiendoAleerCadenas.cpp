#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    cin.ignore();
    while (t--){
        string a;
        
        getline(cin, a);

        int ta = a.size();

        cout << "\"" << a << "\" tiene " << ta << " caracteres" << "\n";

    }
    
}