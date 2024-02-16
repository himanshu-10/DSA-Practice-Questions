class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(int i = 0; i< arr.size();i++){
            m[arr[i]]++;
        }
        
        // frequency sort
        vector<int>freq;
        for(auto it : m){
            freq.push_back(it.second);
        }
        
        sort(freq.begin(),freq.end());
        int ptr = 0;
        while(k>0){
            if(k >= freq[ptr] ){
                k-=freq[ptr];
                ptr++;
            }else break;
        }
        
        return freq.size()-ptr;
    }
};