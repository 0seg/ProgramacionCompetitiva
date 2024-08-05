#include <bits/stdc++.h>
using namespace std;


vector<int> leftrotation(int d, vector<int> arr){
    while (d--) {
        int aux = arr[0];
        for(int i = 0; i < arr.size(); i++){
            arr[i] = arr[i+1];
        }
        arr[arr.size()-1] = aux;
     
        return arr;
}

}

int main(){
    


}