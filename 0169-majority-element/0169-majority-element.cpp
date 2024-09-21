class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>mpp;
        int ans = 0;
        for(int i = 0; i< nums.size();i++){
            mpp[nums[i]]++;
        }
        
        
        for(auto it : mpp){
            if(it.second > nums.size()/2 ){
                ans =  it.first;
            }
        }
        return ans;
    }
};