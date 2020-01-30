class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        std::unordered_map<int, int> hash_map;
        std::unordered_map<int, int> hash_map2;
        for(int i = 0; i < arr.size(); i++){
            auto ptr = hash_map.find(arr[i]);
            if(ptr != hash_map.end()){
                //found, increment the counter
                ptr->second++;
            }else{
                hash_map.insert({arr[i], 1});
            }
        }
        
        for(auto it = hash_map.begin(); it != hash_map.end(); it++){
            auto ptr = hash_map2.find(it->second);
            if(ptr != hash_map2.end()){
                //occurrence duplicate is found
                return false;
            }else{
                hash_map2.insert({it->second, 0});
            }
        }
        return true;
    }
};