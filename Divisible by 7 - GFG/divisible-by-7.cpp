//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        
    
        int sum = 0;
        for(int i = 0;i<num.size();i++){
            int digit = num.at(i) -'0';
            sum = sum *10 + digit;
            sum = sum % 7;
        }
        
        if(sum == 0)
            return 1;
        else
            return 0;
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends