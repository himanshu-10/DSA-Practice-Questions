class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        // MOORE VOTING ALGO
        
        int elem;
        int cnt = 0;
        
        for(int i = 0; i< nums.size();i++){
            
            if(cnt == 0){
                cnt = 1;
                elem = nums[i];
            }else 
            if(nums[i] == elem) cnt++;
            else cnt--;
        }
        
        int cnt1 = 0;
        int ans;
        for(int i = 0; i< nums.size();i++){
            if(nums[i] == elem) cnt1++;
        }
        
        if(cnt1 > (nums.size()/2)) ans =  elem;
        
        return ans
            ;
    }
};