#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    vector<int> Arr;

    for(int i = 0; i<n;  i++){
        int k;
        cin >> k;
        Arr.push_back(k);
    }

    int max = Arr[0];

    for (int j = 1; j < Arr.size(); j++){
        if(Arr[j] > max){
            max = Arr[j];
        }
    }

    cout << max << endl;


}