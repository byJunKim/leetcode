class Solution {
public:
    string removeOuterParentheses(string S) {
        
        int open = 0;
        int close = 0;
        
        size_t sub_start = 1;
        size_t sub_end = 0;
        
        string ans;
        for(int i = 0; i < S.length(); i++){
            
            if(S[i] == '(') open++;
            if(S[i] == ')') close++;
            
            /*
            when number of open and close braces are the same
            then add the substring inside the outermost bracket to the final string
            */
            if(open == close){
                sub_end = i - 1;   
                ans += S.substr(sub_start, sub_end - sub_start + 1);
                sub_start = i + 2;
                open = 0;
                close = 0;
            }
        }
        return ans;
    }
};