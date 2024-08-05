#include <iostream>
using namespace std;


int main(){
    int n; 
    cin >> n;
    int m = 0;


    if(n % 2 == 0){
        n = n / 2, m++;
    }else{
        n +=1 , m++;
    } 

    if(n >= 100){
        n /= 100, m++;
    }
    else if(n >= 10) {
        n /= 10, m ++;
    }
    else if(n % 3 == 0 )
    {
        n -= 1, m++;
    }

    cout << n << " " << m << endl;
}