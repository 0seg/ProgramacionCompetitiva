#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int P, N, frec[101];
    cin >>P >> N;

    
    for(int i = 0; i <= P; i++){
        frec[i] = 0;
    }


    for(int i = 0; i < N; i++){
        int f;
        cin >> f;
        frec[f]++;

    }
    for(int i= 1; i <= P; i++){

        cout << i << "-" << frec[i] << endl;
    }


}