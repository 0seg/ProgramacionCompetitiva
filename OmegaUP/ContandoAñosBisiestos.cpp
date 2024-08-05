#include <bits/stdc++.h>
using namespace std;

bool año(int numero){ 
    if((numero % 4 == 0 && numero % 100 != 0) || numero % 400 == 0){
        return true;
    }else{
        return false;
    }

}


int main(){
    int count = 0;
    
    for(int i = 0; i < 10; i++){
        int n; 
        cin >> n;

        if(año(n)){
            count++;
        }


    }

    cout << count << "\n";


}