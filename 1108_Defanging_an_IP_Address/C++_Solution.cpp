class Solution {
public:
    string defangIPaddr(string address) {
        string ans(address.length() + 6, ' ');
        int idx = 0;
        for(int i=0; i < address.length(); i++){
            if(address[i] == '.'){
                ans[idx] = '[';
                ans[++idx] = '.';
                ans[++idx] = ']';
            }else{
                ans[idx] = address[i];
            }
            idx++;
        }
        return ans;
    }
};