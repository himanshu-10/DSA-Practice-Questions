class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> s(nums.begin(), nums.end());
        copy(s.begin(), s.end(), nums.begin());
        return s.size(); 
    }
};