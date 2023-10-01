class Solution {
public:
    string reverseWords(string s) {
        
        string ans="";
        string word = "";
        
        // iterate in s
        for(char ch :s){
            if(ch != ' '){         // char pickup
                word+=ch;           // concatenate in word
            }else{                  // space hit
                reverse(word.begin(),word.end());       //reverse the word   
                ans+=word + " ";                        // put the reverse word into ans string and add space to end
                word = "";                               // clear the word string and again start fron new
            }
        }
        // last string
        reverse(word.begin(),word.end());                   
        ans+=word;
        // ans
        return ans;
       
    }
};