class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remain =0;
        unordered_map<int, int> umap; 
        for(int i=0; i < nums.size(); i++){   
            //initialize hash table <key, index>
            umap.insert({nums[i], i});
        }
        
        for(int i=0; i < nums.size(); i++){
            remain = target - nums[i];
            auto found = umap.find(remain);
            if(found != umap.end()){
                if(found->second != i){
                    return vector<int>{i, found->second};
                }
            }
        }
    return vector<int>{0,0}; //this is not the case
    }
};