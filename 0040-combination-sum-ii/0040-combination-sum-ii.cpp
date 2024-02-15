class Solution {
public:
    
    void f(int index, int target, vector<int>& arr, vector<vector<int>>&ans, vector<int>&ds){
        
        // base case
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        
        for(int i = index; i< arr.size();i++){
            
            // check for duplicate
            if(i > index && arr[i] == arr[i-1]) 
                continue;
            
            
            if(arr[i] > target)
                break;
            
            //pick
            ds.push_back(arr[i]);
            f(i+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        
        // sort the arr becz we need lexiographic order
        sort(arr.begin(),arr.end());
        // store all the combinations
        vector<vector<int>>ans;
        // store the single combination
        vector<int>ds;
       // index -- target -- arr -- ans -- ds
        f(0,target,arr,ans,ds);
        return ans;
    }
};