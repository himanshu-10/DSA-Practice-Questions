class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = -1;
        for(int i = arr.size()-1;i>=0;i--){
            
            // elemt > maxi
            if(arr[i] > maxi){
                int temp = maxi;
                maxi = arr[i];
                arr[i] = temp;
            }else
                arr[i] = maxi;
        }
        return arr;
    }
};