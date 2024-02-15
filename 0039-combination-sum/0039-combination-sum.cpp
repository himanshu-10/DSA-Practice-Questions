class Solution {
public:
    
    void findCombination(int i, int target, vector<int>&arr, vector<vector<int>>&ans, vector<int>&ds){
        
        // base case
        
        // target == 0 store and return
        // target < 0 return 
        // index == arr size() return
        
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        
        if(target < 0)
            return;
        if(i == arr.size())
            return;
        
        // pick the elem
        ds.push_back(arr[i]);
        findCombination(i,target-arr[i],arr,ans,ds);
        ds.pop_back();
        
        // not pick the elem
        findCombination(i+1,target,arr,ans,ds);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        // take data structure to store all the combination
        vector<vector<int>>ans;
        // take data structure to store a single combination target
        vector<int>ds;
        findCombination(0, target, arr, ans, ds);
        return ans;
    }
};