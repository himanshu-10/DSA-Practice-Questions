class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
       
        
        int n=arr.size()*0.25;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        int ans;
        for(auto it:m)
        {
            if(it.second>n)
            {
                ans=it.first;
            }
        }
        return ans;
    }
};