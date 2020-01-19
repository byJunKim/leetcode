#include <unordered_map>
class Solution {
public:
    std::unordered_map<char, int> substring;
    int lengthOfLongestSubstring(string s) {
        
        int skipped = 0;
        int new_start =-1;
        int length =0;
        int repeated = -1;
        int max_count = 0;
        for(unsigned i=0; i < s.size(); i++){
            
            if( substring.empty() || (substring.find(s[i]) == substring.end())  ){
                
                substring.insert(std::make_pair(s[i], i));
                length++;
                if(length > max_count){
                    max_count = length;
                }
            }else{
                // it is repeated
                repeated = substring.find(s[i])->second;
                if(repeated >= new_start){
                    new_start = repeated + 1;
                    length = i - repeated;
                    substring.find(s[i])->second = i;
                }else{
                    substring.find(s[i])->second = i;
                    length++;   
                }
                
                
                if(length > max_count){
                    max_count = length;
                }
                
            }
        }
        
        
        return max_count;
    }
};