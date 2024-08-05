#include <bits/stdc++.h>
using namespace std;

int main(){
    string pa;
    stack<string> p;

    while (cin >> pa)

    {
        if(pa=="Santiago" or pa=="Pedro" or 
        pa=="Ariadna" or pa=="Marco" or 
        pa=="Juan" or pa=="Angel"){
        
        }else{
            p.push(pa);
        }
    
    }
    cout << p.size() << "\n"; 
    while (!p.empty())
    {
        cout << p.top()<<"\n";
        p.pop();
    }
    


}