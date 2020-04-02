class Solution {
public:
    vector<int> sumZero(int n) {
        std::vector<int> ans;
        if (n == 0) return ans;
        
        if(n % 2 == 0){
            //even
            for(int i = 1; i <= n/2; i++){
                ans.push_back(i);
                ans.push_back(-i);
            }
        }else{
            //odd
            for(int i = 1; i <= (int)n/2; i++){
                ans.push_back(i);
                ans.push_back(-i);
            }
            ans.push_back(0);
        }
        return ans;
    }
};