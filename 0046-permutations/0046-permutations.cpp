class Solution {
public:
    
    void f(vector<int>&arr,vector<vector<int>>&ans, vector<int>&ds, int freq[]){
        
        // base case
        if(ds.size() == arr.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i =0;i<arr.size();i++){
            
            if(freq[i] == 0){
                
                // pick the elem
                ds.push_back(arr[i]);
                // mark on freq. array
                freq[i] = 1;
                
                f(arr,ans,ds,freq);
                
                // backtrack
                freq[i] = 0;
                ds.pop_back();
            }
           
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        
        // freq. array & initialize with 0
        int freq[nums.size()];
        for(int i = 0;i<nums.size();i++){
            freq[i] = 0;
        }
        f(nums,ans,ds,freq);
        return ans;
        
        
    }
};