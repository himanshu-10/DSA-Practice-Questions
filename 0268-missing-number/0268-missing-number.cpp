class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // APPROACH 1
        int n = nums.size();
        int maxSum = (n *(n+1))/2;
        int arrSum = 0;
        for(auto it: nums){
            arrSum+=it;
        }
        
        return maxSum - arrSum;
    }
};