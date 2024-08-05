#include <bits/stdtr1c++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        arr.push_back(j);
    }
    int suma = accumulate(arr.begin(), arr.end(), 0);

    double promedio = suma/n;

    cout << fixed << setprecision(2) << promedio << endl;

}