class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        // edge case
        if(arr.size() < 3)
            return false;
            
            
        int i = 1;
        while(i < arr.size()){
            // strinctly inc
            if(arr[i-1] < arr[i])
                i++;
            else break;
        }
        
        // if there is no dec. only continuously inc
        if(i == arr.size() ||i == 1)
            return false;
        
        // at some point it start desc
        while(i < arr.size()){
            // strictly desc
            if(arr[i-1] > arr[i])
                i++;
            else break;
            
        }
        
        if(i == arr.size())
            return true;
        return false;
    }
};