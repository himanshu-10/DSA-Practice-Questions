class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
//         int cnt = 0;
//         long long mul = 1;
//         for(int i = 0; i< nums.size();i++){
//             for(int j = i; j< nums.size();j++){
//                 mul = mul * nums[j];
//                 if(mul < k)
//                     cnt++;
//             }
//             mul = 1;
//         }
        
//         return cnt;
        
         int n = nums.size();
        if(k <= 1) return 0;
        int ans = 0;
        int product = 1;
        int left = 0;
        
        for(int right = 0; right < n; right++){
            product *= nums[right];
            while(product >= k){
                product /= nums[left++];
            }
            ans += right-left+1;
        }
        return ans;
    }
};