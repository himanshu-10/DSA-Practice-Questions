class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // Sort the input array in ascending order
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        
        // Iterate through the sorted array, skipping every other element
        for(int i = 0; i < nums.size(); i = i + 2) {
            sum += nums[i];
        }
        
        // Return the sum of the selected elements
        return sum;
    }
};