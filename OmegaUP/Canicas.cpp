#include <bits/stdc++.h>
using namespace std;

int canicas[1000001];

int main(){
    int N,C;
    cin >> N >> C;

    for(int i =1; i <=N; i++){
        canicas[i]= 0;
    } 

    for(int i = 0; i < C; i++){
        int vasos;
        cin >> vasos;

        canicas[vasos]++;
    }
    for(int i = 1; i <= N; i++){
        cout << canicas[i] << endl;
    }


}

