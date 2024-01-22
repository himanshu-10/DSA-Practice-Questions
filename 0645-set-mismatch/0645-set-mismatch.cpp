class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int>m;
        for(int i = 0; i< nums.size();i++){
            m[nums[i]]++;
        }
        int sum = (nums.size()*(nums.size()+1))/2;
        vector<int>ans;
        for(auto it: m){
            if(it.second == 2) ans.push_back(it.first);
            sum-=it.first;
        }
        ans.push_back(sum);
        return ans;
    }
};