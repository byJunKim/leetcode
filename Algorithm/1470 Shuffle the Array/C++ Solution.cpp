class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //we can assume that the len of the array is even
        if(nums.size() % 2 != 0){
            return vector<int>();
        }
        
        int middleIdx = nums.size() / 2;
        int j = middleIdx;
        vector<int> ans;
        for(int i=0; i < middleIdx; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j+i]);
        }
        return ans;
    }
};