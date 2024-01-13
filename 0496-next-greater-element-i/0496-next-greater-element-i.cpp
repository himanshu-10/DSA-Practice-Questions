class Solution {
public:
    vector<int>NGR(vector<int>nums2){
        vector<int>ans;
        stack<int>s;
        int n  = nums2.size();
        
        for(int i = n-1; i>=0; i--){
            if(s.size() == 0) ans.push_back(-1);
            else if(s.size() > 0 && s.top() > nums2[i]) ans.push_back(s.top());
            else if(s.size() >0 && s.top() <= nums2[i]){
                while(s.size() >0 && s.top() <= nums2[i]){
                    s.pop();
                }
                if(s.size() == 0) ans.push_back(-1);
                else ans.push_back(s.top());
            }
            s.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans = NGR(nums2);
        vector<int>fans;
        for(int i = 0; i< nums1.size();i++){
            for(int j = 0; j<nums2.size();j++){
                if(nums1[i] == nums2[j]){
                    fans.push_back(ans[j]);
                }
            }
        } 
        return fans;
        
    }
};