class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size() == 0){
            int size2 = nums2.size();
            if(size2 %2 ==0){
                return (float)(nums2[size2/2]+nums2[size2/2 - 1])/2;
            }else{
                return (float)nums2[floor(size2/2)];   
            }
        }
        
        if(nums2.size() == 0){
            int size1 = nums1.size();
            if(size1 %2 ==0){
                return (float)(nums1[size1/2]+nums1[size1/2 - 1])/2;
            }else{
                return (float)nums1[(floor)(size1/2)];   
            }
        }
        
        
        int total_size = nums1.size() + nums2.size();
        vector<int> sorted_arr;
        
        int i = 0;
        int j = 0;
        int size = floor((float)total_size / 2);
        while(sorted_arr.size() <= size){
            if( (nums1[i] <= nums2[j] && i < nums1.size()) || (i < nums1.size() && j >= nums2.size()) ){
                sorted_arr.push_back(nums1[i]);
                i++;
                
            }else if( (nums1[i] > nums2[j] && j < nums2.size()) || ( j < nums2.size() && i >= nums1.size() ) ){
                sorted_arr.push_back(nums2[j]);
                j++;
            }
        }
        
        if(total_size % 2 == 0){
            //even
            return (float)((float)((float)sorted_arr[size] + (float)sorted_arr[size - 1])/2);
        }else{
            return (float)sorted_arr[size];    
        }
        
        
    
    }
};