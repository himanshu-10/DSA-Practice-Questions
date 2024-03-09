class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        // 2 array 
        
        // intersection nikalo --> store in temp array
        // return 1 elem
        
        vector<int>temp;
        int n = nums1.size();
        int m = nums2.size();
        int i =0;
        int j = 0;
        
        while( i< n && j < m){
            if(nums1[i] == nums2[j]){
                temp.push_back(nums1[i]);
                i++;
                j++;
            }else if(nums1[i] > nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        if(temp.size() == 0) return -1;
        return temp[0];
    }
};