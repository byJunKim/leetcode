class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() <= 1) return 0;
        
        int min = prices[0];
        int min_idx = 0;
        int max = prices[0];
        int max_idx = 0;
        int max_profit = 0;
        
        for(int i = 1; i < prices.size(); i++){
                 
            //as we traverse, we check if a better profit can be made and update parameters
            if(i > min_idx && prices[i] - min > max_profit){
                max = prices[i];
                max_idx = i;
                max_profit = max - min;
            }
            
            if(prices[i] < min){
                //as we traverse, if we find a smaller value, we update min
                min = prices[i];
                min_idx = i;
            }
        }
        return max_profit;
        
    }
};