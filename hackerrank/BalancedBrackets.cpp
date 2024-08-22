#include<bits/stdc++.h>
using namespace std;


string isBalanced(string s) {    
    stack<char> brackets;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '{' or s[i] == '[' or s[i]=='('){
            brackets.push(s[i]);
        }else {
        if(brackets.empty()) return "NO";

        int top = brackets.top();

        if(s[i] == ')' and top != '(' or
            s[i] == '}' and  top != '{' or 
            s[i] == ']' and top != '['){
                return "NO"; 
     
          }
          brackets.pop();
        }

    }
        if(brackets.empty()){
            return "YES";
        }else return "NO";
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int  k; cin >>  k; 
    while(k--){
        string p; cin >> p;
        if(ba(p)){
            cout << "YES" << "\n";
        }else cout << "NO" << "\n";

    }

}