class Solution {
public:
    string defangIPaddr(string address) {
        string a;

        for(size_t i{}; i<address.size(); ++i){
            if(address[i] == '.'){
                a += "[.]";
            }else {
                a += address[i];
            }
        }
        return a;
    }
};