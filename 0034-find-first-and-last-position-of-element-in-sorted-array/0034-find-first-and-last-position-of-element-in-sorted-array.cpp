class Solution {
public:
    
    int firstPos(vector<int>&nums, int t){
        
        int n = nums.size()-1;
        int l = 0; 
        int h = n;
        int ans = -1 ;
        
        while(l<=h){
            int mid = (l+h)/2;
            
            if(nums[mid] == t){
                ans = mid;
                h = mid-1;
            }else if(nums[mid] > t){
                h = mid-1;
            }else l = mid +1;
        }
        
        return ans;
    }
    
    int lastPos(vector<int>&nums, int t){
        int n = nums.size()-1;
        int l = 0; 
        int h = n;
        int ans = -1 ;
        
        while(l <= h){
            int mid = (l+h)/2;
            
            if(nums[mid] == t){
                ans = mid;
                l = mid+1;
            }else if(nums[mid] > t){
                h = mid-1;
            }else l = mid+1;
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;
        
        ans.push_back(firstPos(nums,target));
        ans.push_back(lastPos(nums,target));
        
        return ans;
    }
};