class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int lastElem = nums[nums.size()-1];
        int secondLastElem = nums[nums.size()-2];
        
        return ((lastElem-1)*(secondLastElem-1));
    }
};