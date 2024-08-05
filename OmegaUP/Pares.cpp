#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    bool pares = false;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            pares = true;
            cout << "[" << arr[i] << "]" << endl;
        }
    }
    if(!pares){
        cout << ":("<< endl;
    }
     cout << endl;

}