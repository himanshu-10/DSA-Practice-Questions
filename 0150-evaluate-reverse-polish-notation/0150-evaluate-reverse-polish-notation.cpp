class Solution {
public:
    int evalRPN(vector<string>& S) {
        
        stack<int>s;
        int val1,val2;
        for(auto it :S){
            if(it == "+"){
                val1 = s.top();
                s.pop();
                val2 = s.top();
                s.pop();
                s.push(val1+val2);
                
            }else if(it == "-"){
                 val1 = s.top();
                s.pop();
                val2 = s.top();
                s.pop();
                s.push(val2-val1);
                
            }else if(it == "*"){
                val1 = s.top();
                s.pop();
                val2 = s.top();
                s.pop();
                s.push(val1*val2);
                
            }else if(it == "/"){
                val1 = s.top();
                s.pop();
                val2 = s.top();
                s.pop();
                s.push(val2/val1);
                
            }else{
                s.push(stoi(it));
            }
        }
        
        return s.top();
    }
};