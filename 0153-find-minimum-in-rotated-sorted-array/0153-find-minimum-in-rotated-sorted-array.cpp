class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int h = nums.size()-1;
        
        int ans = INT_MAX;
        
        while(l <= h){
            int mid = (l+h)/2;
            
            // check which part is sorted
            if(nums[l] <= nums[mid]){
                // left part is sorted
                ans = min(nums[l],ans);         // update ans
                l = mid+1;                      // move to unsorted part[right]
            }else{
                // right part is sorted
                ans = min(ans,nums[mid]);       // update ans
                h = mid-1;                      // move to unsorted part[left]
            }
            
            
        }
        return ans;
    }
};