class Solution {
public:
    int minOperations(vector<int>& nums) {
        // declare map
        unordered_map<int, int>m;
        for (int it : nums) {
            m[it]++;
        }
        int ans = 0;
        for (auto& i : m) {
            int val = i.second;
            
            while (val > 0) {
                if (val == 1) {
                    return -1;
                }
                if (val == 4 || val == 2) {
                    val -= 2;
                    ans++;
                } else {
                    val -= 3;
                    ans++;
                }
            }
        }
        return ans;
    }
};



