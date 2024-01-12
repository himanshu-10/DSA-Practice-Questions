class Solution {
public:
    
    vector<int>NSL(vector<int>arr){
        // to store the index of NSL
        vector<int>left;
        // elem - index
        stack<pair<int,int>>s;
        
        for(int i = 0;i<arr.size();i++){
            if(s.empty()) left.push_back(-1);
            else if(s.size() > 0 && s.top().first < arr[i]){
                left.push_back(s.top().second);
            }else if(s.size() > 0  && s.top().first >= arr[i]){
                while(s.size() > 0 && s.top().first >= arr[i]){
                    s.pop();
                }
                if(s.size() == 0) left.push_back(-1);
                else left.push_back(s.top().second);
            }
             s.push({arr[i],i});   
        }
        return left;
    }
    
    vector<int>NSR(vector<int> heights){  
        // Function to find indices of next smallest right element
        vector<int> right;
        
        stack<pair<int,int>> st;
        
        for(int i=heights.size()-1;i>=0;i--){
            if(st.empty())
                // if stack is empty push the size of arr
                right.push_back(heights.size());
            else if(!st.empty() && st.top().first<heights[i])
                right.push_back(st.top().second);
            else if(!st.empty() && st.top().first>=heights[i]){
                while(!st.empty() && st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                    right.push_back(heights.size());
                else 
                    right.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    
    int MAH(vector<int>&arr){
        
        vector<int>right;
        vector<int>left;
        
        // step 1: make a vector to store NSL[Nearest smallest to left]
        left = NSL(arr);
        
        // step 2: make a vector to store NSR[nearest smaller to right]
        right = NSR(arr);
        
        // step 3: find width
        vector<int>width;
        for(int i =0;i<left.size();i++){
            width.push_back(right[i] - left[i] -1);
        }
        // step 4: find area
        vector<int>area;
        for(int i = 0; i< arr.size();i++){
            area.push_back(arr[i]*width[i]);
        }
        // step 5: find max in area and return
        int maxi = INT_MIN;
        for(int i = 0;i<area.size();i++){
            maxi = max(area[i],maxi);
        }
        
        // return 
        return maxi;
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>storeMAH;
        
        if(n == 0) return 0;
        
        // take the first row and call for MAH
        vector<int>v;
        for(int j = 0; j < m; j++){
            v.push_back(matrix[0][j]-'0');
        }
        storeMAH.push_back(MAH(v));
        // int maxi = MAH(v);
        
        
        // take the 2nd row of matrix and add with the first row[which is stored in v]
        for(int i = 1; i< n; i++){
            for(int j = 0; j< m; j++){
                // if j = 0, means no buildings are formed
                if(matrix[i][j] == '0')
                    v[j] = 0;
                else 
                    // adding the current row wid the previous row(which stored in v)
                    v[j] = v[j] +(matrix[i][j]-'0');
            }
            // call for MAH
            storeMAH.push_back(MAH(v));     
        }
        
        // we store MAH for whole matrix
        // find the max area
        int maxi = INT_MIN;
        for(int k = 0; k< storeMAH.size() ;k++){
            maxi = max(maxi,storeMAH[k]);
        }
        
        return maxi;
        
        
    }
};