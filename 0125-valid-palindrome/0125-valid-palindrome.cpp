class Solution {
public:
    
    bool isPick(char ch){
        if((ch >='a' && ch <='z') || (ch >='A' && ch <='Z') || (ch >='0' && ch <='9') ){
            return true;
        }else
            return false;            
    }
    
    char toLower(char ch){
        if(ch >= 'a' && ch <= 'z')
            return ch;
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
        
        
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        
        while(i<=j){
            //check for pick or not
            if(isPick(s[i]) == false)
                i++;
            else if(isPick(s[j]) == false)
                    j--;
                 else if(toLower(s[i]) == toLower(s[j])){       // convert to lower case
                     i++;
                     j--;
                 }else{
                     return false;
                 }
        }
        return true;
    }
};