class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int J_S = 0;
        std::unordered_map<char, int> stone;
        int count = 0;
        //creating a hash table for stone
        for(int i=0; i < S.length(); i++){
            auto found = stone.find(S[i]);
            if(found == stone.end()){
                stone.insert({S[i], 1});
            }else{
                found->second++;
            }
        }
        
        for(int i = 0; i < J.length(); i++){
            auto found = stone.find(J[i]);
            if(found != stone.end()){
                count += int(found->second);
            }
        }
        
        return count;
        
    }
};