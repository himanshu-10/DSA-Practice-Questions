class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        
        for(auto it : nums){
            if(it == 1){
                count++;
                if(count > maxCount){
                    maxCount++;
                }
            }else{
                count = 0;
            }
        }
        return maxCount;
    }
};