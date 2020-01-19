class Solution {
public:
    int reverse(int x) {
        
        int digit = 0;
        long ans = 0;
        while(x != 0){
            digit = x % 10; //pop the last digit
            x /= 10; //change x --> can be used for interation stop condition
            ans = ans * 10 + digit; // increment the original digit (shift to the left) and add the new digit            
            if(ans < -pow(2,31) || ans > pow(2,31) - 1) return 0; //overflow check
        }
        return ans;
    }
};