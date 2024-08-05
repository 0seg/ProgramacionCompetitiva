#include <bits/stdc++.h>
using namespace std;

long long suma(long long n){
    long long p = (n*(n+1))/2;

    return p;
}

int main(){
    long long n;
    cin >> n;

    cout << suma(n);

}