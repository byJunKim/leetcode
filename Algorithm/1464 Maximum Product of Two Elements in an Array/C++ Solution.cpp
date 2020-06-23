class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = nums[0];
        int secondMax = 0;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] >= max){
                secondMax = max;
                max = nums[i];
            }else if(nums[i] >= secondMax){
                secondMax = nums[i];
            }
            
        }
        return (max-1)*(secondMax-1);
    }
};