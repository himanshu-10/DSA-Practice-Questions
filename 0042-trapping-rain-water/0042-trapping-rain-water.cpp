class Solution {
public:
    int trap(vector<int>& height) {
        
        // initialize
        int n = height.size();
        vector<int>mxL(n);
        vector<int>mxR(n);
       
        
        // step1: find mxL means maximum elem in left side of that element
        mxL[0] = height[0];
        for(int i = 1; i< n;i++){
            mxL[i] = max( mxL[i-1],height[i] );
        }
        
        // step2 : find mxR means maximum elem in right side of that element
        mxR[n-1] = height[n-1];
        for(int i = n-2; i>=0; i--){
            mxR[i] = max(mxR[i+1],height[i]);
        }
        
        // step3 : find water at each building[ water[i] = min(mxL[i] - mxR[i]) ]
        vector<int>water(n);
        for(int i = 0; i < n; i++){
            water[i] = (min(mxL[i],mxR[i]) - height[i]);
        }
        
        // step 4: find the summation of water array
        int sum = 0;
        for(int i = 0; i< water.size();i++){
            sum+=water[i];
        }
        // step 5 : return summation
        return sum;
    }
};