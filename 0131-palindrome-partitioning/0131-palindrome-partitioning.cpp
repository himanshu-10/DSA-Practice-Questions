class Solution {
public:
    
    bool isPalin(string s, int st,int e){
        while(st <= e){
            if(s[st++] != s[e--])
                return false;
            
        }
        return true;
    }
    void f(int index, string s,vector<vector<string>>&ans, vector<string>&ds){
        
        // base case
        if(index == s.size()){
            ans.push_back(ds);
            return ;
        }
        
        for(int i = index;i<s.size();i++){
            
            // check for palindrome
            if(isPalin(s,index,i)){
                // push 
                ds.push_back(s.substr(index,i-index+1));
                // recursive call
                f(i+1,s,ans,ds);
                // backtracking
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        f(0,s,ans,ds);
        return ans;
    }
};