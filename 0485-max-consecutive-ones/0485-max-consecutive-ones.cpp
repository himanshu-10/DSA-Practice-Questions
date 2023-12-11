class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxi = 0;
        int currCnt = 0;
        for(int i =0; i<nums.size();i++){
            if(nums[i] == 1){
                currCnt++;
                maxi = max(maxi,currCnt);
            }else{
                currCnt = 0;
            }
        }
        return maxi;
    }
};