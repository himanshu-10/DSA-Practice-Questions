class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // sort(nums.begin(),nums.end());
        // for(int i =0;i < nums.size() ;i++){
        //     if(i == nums[i]){
        //         i++;
        //     }else{
        //         return i;
        //     }
        // }
        // return 0;

        int sum = 0;
        int totalSumOfNumsElement = (nums.size()*(nums.size() + 1))/2;
        for(int i = 0; i< nums.size();i++){
            sum = sum + nums[i];
        }

         int ans = totalSumOfNumsElement - sum;
         return ans;
        
    }
};