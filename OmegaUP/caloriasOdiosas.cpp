#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vi(7);
    int n;

    for(int i = 1; i <= vi.size(); i++){
        cin >> vi[i];
    }
    cin >> n;

    int cal = vi[n]*15;

    if(cal >= 180){
        cout << cal << "\n" << "Bien hecho ;)";
    }else{
        cout << cal << "\n" << "Muy mal, no puedo creerlo :(";
    }



}