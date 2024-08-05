#include <iostream>
using namespace std;

int main(){
    int t, robot, fer, vel1 = 0;
    cin >> t >> robot >> fer;
    for(int i = 1; i <=t; i++){
        int v;
        cin >> v;

        robot += v; 
        
        int d = (robot + 1 - fer), vel = d / i;
        if(d % i) vel++;

        if(vel > vel1 ) vel1 = vel;
    }
    cout << vel1 << endl;

}