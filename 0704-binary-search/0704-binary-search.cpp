class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;
        int n = nums.size()-1;
        int e = n;
       
        while(s<=e){
            int mid = s+(e-s)/2;
           if(target == nums[mid]){
               return mid;
           }else if(target > nums[mid]){
               s = mid +1;
           }else{
               e = mid-1;
           }
        }
        return -1;
    }
};