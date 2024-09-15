class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        
       //  METHOD 1
        
//         // map
//         int cnt = 0;
//         long long sum = 0;
        // map<long long, int>mpp;
        
//         for(int i = 0; i< nums.size();i++){
            
//             sum+=nums[i];
//             if(sum == k){
//                 cnt++;
//             }
            
//             long long rem = sum -k;
//             if(mpp.find(rem) != mpp.end()){
//                 cnt++;
//             }
            
//             if(mpp.find(sum) == mpp.end())
//                 mpp[sum] = i;
//         }
        
//         return cnt;
        
        
        // METHOD 2
        
        
//         int n= arr.size();
//         int cnt= 0;

//         for(int i=0; i<n; i++)
//         {
//             int sum= 0;
//             for(int j=i; j<n; j++)
//             {
//                 sum+= arr[j];
//                if(sum== k)
//                {
//                  cnt++;
//                }
//             }
//         }
//        return cnt;
        
        
        // METHOD 3
        
        int prefixSum = 0;
        int cnt = 0;
        
        unordered_map<int,int>m;
        m[prefixSum] = 1;
        for(auto it : arr){
            
            prefixSum+=it;
            if(m.find(prefixSum-k)!= m.end()){
                cnt+=m[prefixSum-k];
            }
            m[prefixSum]++;
        }
        
        return cnt;
        
    
        
        
        
    }
};

