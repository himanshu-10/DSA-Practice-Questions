class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans = nums[0];
    // Initialize two variables to keep track of the minimum and second minimum values
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    // Iterate through the elements of the input vector starting from index 1
    for(int i = 1; i < nums.size(); i++) {
        // Check if the current element is smaller than the current minimum (min1)
        if(min1 > nums[i]) {
            // If true, update min2 with the current value of min1
            // and update min1 with the current element
            min2 = min1;
            min1 = nums[i];
        } else if(min2 > nums[i]) {
            // If the current element is not smaller than min1 but is smaller than min2,
            // update min2 with the current element
            min2 = nums[i];
        }
    }

    // Return the sum of the answer, min1, and min2
    return ans + min1 + min2;

    }
};