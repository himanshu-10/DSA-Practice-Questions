class Solution {
public:
    
    void f(int index, vector<int>&arr,vector<vector<int>>&ans,vector<int>&ds){
        
        ans.push_back(ds);
        for(int i = index;i<arr.size();i++){
            
            // duplicate check
            if(i > index && arr[i] == arr[i-1])
                continue;
            // pick the elem
            ds.push_back(arr[i]);
            f(i+1,arr,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        f(0,nums,ans,ds);
        return ans;
    }
};