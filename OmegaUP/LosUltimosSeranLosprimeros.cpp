#include <bits/stdc++.h>
using namespace std;



int main(){
    string nombre;
    stack<string> p;

    while (true){
        getline(cin, nombre);
        if(nombre == "#"){
            break;
        }
        p.push(nombre);

    }

    while (!p.empty())
    {
        cout << p.top() << "\n";
        p.pop();
    }
        


}