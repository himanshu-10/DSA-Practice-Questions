class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int ln= arr.size();
        
        // next smaller element
        vector<int> nse(ln,0);
        stack<int> st;
        st.push(arr.back());
        
        for(int i=ln-2;i>= 0;i--){
            while(!st.empty() && arr[i]< st.top())st.pop();
            nse[i]= st.empty()? 0: st.top();
            st.push(arr[i]);
        }
        
        // modifying input array
        for(int i=0;i<ln;i++)
            arr[i]-= nse[i];
        
        return arr;
    }
};