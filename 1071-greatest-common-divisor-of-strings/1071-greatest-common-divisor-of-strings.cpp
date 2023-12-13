class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // we use a inbuild fxn 
        // gcd(2,4) = 2;
        
        if(str1+str2 == str2+str1){
            return str1.substr(0,gcd(size(str1),size(str2)));
        }else
            return "";
    }
};

// size of str1 = 6
// size of str2 = 3
// gcd(size(str1),size(str2)) = 3
// str1 .substr(0,3);
// 0,1,2 i.e abc