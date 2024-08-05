#include <bits/stdc++.h>
using namespace std;


int main(){
    long long a,b;    
    cin >> a >> b;

    long long suma = a + b;
    long long resta =  a-b; 
    long long multi = a*b;
    double div = static_cast<double>(a) / b;

    cout << suma << endl;
    cout << resta << endl;
    cout << multi << endl;
    cout <<fixed << setprecision(6) <<  div << endl;

 


}