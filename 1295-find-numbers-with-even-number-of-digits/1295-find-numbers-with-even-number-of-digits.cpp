class Solution {
public:
    
    int cntDigit(int n){
        int count = 0;
        while(n != 0){
            n = n/10;
            count++;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int c ;
        int even=0;
        for(int i = 0;i<nums.size();i++){
            int number = nums[i];
            c = cntDigit(number);
            if(c % 2 == 0){
                even++;
          }
        }
        
       
        return even;
    }
};