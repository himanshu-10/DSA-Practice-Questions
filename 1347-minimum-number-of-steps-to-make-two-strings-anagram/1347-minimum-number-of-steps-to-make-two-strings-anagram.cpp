class Solution {
public:
    int minSteps(string s, string t) {
        
        unordered_map<char,int>m;
        for(auto it: s){
            m[it]++;
        }
        for(auto it : t){
            m[it]--;
        }
        
        int sum = 0;
        for(auto it : m){
            sum+=abs(it.second);
        }
        return sum/2;
    }
};