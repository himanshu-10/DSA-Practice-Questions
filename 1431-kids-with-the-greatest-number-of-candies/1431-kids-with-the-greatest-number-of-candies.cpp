class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int i = 0;
        while(i < candies.size()){
            
            int temp = candies[i] + extraCandies;
            int maxi = -1;
            for(int j = 0; j< candies.size();j++){
                maxi = max(candies[j],maxi);
            }
            
            if(maxi <= temp)
                ans.push_back(true);
            else 
                ans.push_back(false);
            
            i++;
        }
        return ans;
    }
};