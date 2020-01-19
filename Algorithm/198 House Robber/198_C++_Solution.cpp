class Solution {
public:
    int rob(vector<int>& nums) {
        
        const int size = nums.size();
        if(size == 0) return 0;
        if(size == 1) return nums[0];
        
        vector<int> max_money(size);
        
        max_money[0] = nums[0];
        max_money[1] = std::max(nums[0], nums[1]);
        
        for(int i = 2; i < size; i++){
            max_money[i] = std::max(max_money[i - 2] + nums[i], max_money[i-1]);
        }
        
        return max_money[size - 1];
    }
};