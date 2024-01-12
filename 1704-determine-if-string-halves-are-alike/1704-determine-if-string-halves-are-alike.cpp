class Solution {
public:
    bool halvesAreAlike(string s) {
        if(s.size() % 2 != 0) return false;
        int cnt = 0;
        
        for(int i = 0;i<s.size();i++){
            // convrt every captital letter to small letter
            s[i] = tolower(s[i]);
            
            if(i < s.size()/2){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    cnt++;
            }else {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    cnt--;
            }
        }
        return (cnt == 0);
        
    }
};