class Solution {
    
public:
    int climbStairs(int n) {
        
        //each index represents the number of stairs and the value is the number of ways to climb
        int numOfClimbWays[n+1];
        
        //base cases
        if(n == 0) return 1; //# ways to climb 0 stair is 1
        if(n == 1) return 1; //# ways to climb 1 stair is 1
        if(n == 2) return 2; //# ways to climb 2 stairs is 2
        
        numOfClimbWays[0] = 1;
        numOfClimbWays[1] = 1;
        numOfClimbWays[2] = 2;

        for(int i = 3; i <= n; i++){
            numOfClimbWays[i] = numOfClimbWays[i-2] + numOfClimbWays[i-1];
        }
        
        return numOfClimbWays[n];
    }
};