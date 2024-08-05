    #include <bits/stdc++.h>
    using namespace std;


    int main(){
        ios_base::sync_with_stdio(0); cin.tie(0);
        long long int k,a,b;
        cin >> k >> a >> b;
        int mutiplos = 0;
        for (int i = a; i <= b; i++){
            if(i % k == 0){
                mutiplos++;
            }
        }
        cout << mutiplos << endl;

    }