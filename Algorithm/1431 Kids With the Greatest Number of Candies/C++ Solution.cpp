class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        vector<bool> ans(len);
        int maxNum = *max_element(candies.begin(), candies.end());
        cout << maxNum << endl;
        for(int i =0; i < len; i++){
            if(candies[i] + extraCandies >= maxNum){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
};