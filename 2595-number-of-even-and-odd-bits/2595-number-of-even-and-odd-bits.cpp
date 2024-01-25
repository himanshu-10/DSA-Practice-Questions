class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>ans;
        int even = 0;
        int odd = 0;
        int i = 0;
        while(n>0){
            int last = n &1;
            if(last == 1 && i%2 == 0)
                even++;
            if(last == 1 && i%2 != 0)
                odd++;
            
            i++;
            n = n>>1;
        }
        
        ans.push_back(even);
        ans.push_back(odd);
        
        return ans;
        
    }
};