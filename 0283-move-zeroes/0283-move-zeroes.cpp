class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // BRUTE FORCE  [ TC -> 0(N) // SC -> 0(N) ]
        vector<int>temp;
        // step1 -put all non zero into temp
        for(int i =0;i<nums.size();i++){
            if(nums[i]!= 0)
                temp.push_back(nums[i]);
        }
        
        // step2: put all non zero elem to nums from front
        int size = temp.size();
        for(int i = 0; i< size;i++){
            nums[i] = temp[i];
        }
        // step 3 -> put all the zero at back
        for(int i = size;i<nums.size();i++){
            nums[i] = 0;
        }
       
    }
};