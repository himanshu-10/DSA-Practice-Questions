class Solution {
public:
    bool isHappy(int n) {
       
        if (n == 1)
            return true;
        if (((n > 1 && n <= 6) || (n >= 8 && n <= 9)) || n == 0)
            return false;
        
        int sum = 0;
        
        while (n) {
            int bit = n % 10;
            sum += bit * bit;
            n = n / 10;
        }

        if (sum == 1)
            return true;
        if (sum != 1)
            return isHappy(sum);
        return false; 
    }
};