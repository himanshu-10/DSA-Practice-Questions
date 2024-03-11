class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int n = nums.size();
        int i,j,count;
        vector<int> ans;
        for(i=0;i<n;i++){
            count = 0;
            for(j=0;j<n;j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
             ans.push_back(count);
        }
        return ans;
    }
};