class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        vector<int> B(A.size());
        for(int i = 0; i < A.size(); i++){
            B[i] = pow(A[i], 2);
        }
        
        sort(B.begin(), B.end());
        return B;
    }
};