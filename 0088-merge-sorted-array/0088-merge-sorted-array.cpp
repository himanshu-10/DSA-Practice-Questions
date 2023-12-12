class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        // putting the nums2 elemnt in nums1
        for(int i = 0;i<n;i++){
            nums1[i+m] = nums2[i];
        }
        
        // sort the array
        sort(nums1.begin(),nums1.end());
        
        //TC O(M LOG M) + 0(LOG N)
    }
};