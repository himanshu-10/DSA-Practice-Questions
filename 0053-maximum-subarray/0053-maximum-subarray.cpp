class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // USE KADANE'S ALGORITHM
        
        int sum = 0;
        int maxi = nums[0];
        
        for(int i = 0;i<nums.size();i++){
            
            // step1 -> calculate sum 
            sum+=nums[i];
            // step 2 -> update maxi
            maxi = max(sum,maxi);
            // step3 -> sum <0 update sum to 0
            if(sum < 0) sum  = 0;
        }
        
        return maxi;
    }
};