#include <bits/stdc++.h>
using namespace std;

double volumenEs(double r){
    return (4.0*(3.141592653589793)*(r*r*r))/3.0;
}

double superficieEs(double r){
    return 4.0*(3.141592653589793)*(r*r);

}

int main(){
    double r;
    cin >> r;

    cout << fixed << setprecision(2) << "Volumen:"<< volumenEs(r) << " " << "Superficie:" << superficieEs(r) << "\n"; 


}