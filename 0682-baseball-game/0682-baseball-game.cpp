#include <string>

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int first;
        int second;
        stack<int>s;
        for(string i: operations){
            if(i == "+"){
                 first = s.top();
                s.pop();
                 second = s.top();
                
                
                
                s.push(first);
                s.push(first+second);
            }else if(i == "C"){
                  s.pop();
            }else if(i == "D"){
                
                s.push(s.top()*2);
            }else {
                 s.push(stoi(i));
            }
        }
        int ans = 0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
        
        
    }
};