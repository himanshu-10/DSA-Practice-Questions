class Solution {
public:
    int firstOcc(vector<int>&arr ,int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        while(s <= e){
            int mid = (s+e)/2;
            if(arr[mid] == target){
                ans = mid;
                e = mid -1;
            }else if(arr[mid] < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return ans;
    }

    int secondOcc(vector<int>&arr ,int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        while(s <= e){
            int mid = (s+e)/2;
            if(arr[mid] == target){
                ans = mid;
                s =mid+1;
            }else if(arr[mid] < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return ans;       
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOcc(nums,target));
        ans.push_back(secondOcc(nums,target));
        return ans;
    }
};