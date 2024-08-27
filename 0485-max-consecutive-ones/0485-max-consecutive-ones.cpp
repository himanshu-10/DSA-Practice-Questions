class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxCnt = 0;

        for(int it : nums){
            if(it == 1){
                cnt++;
                maxCnt = max(maxCnt,cnt);
            }else{
                cnt = 0;
            }
        }
        return maxCnt;
    }
    
};