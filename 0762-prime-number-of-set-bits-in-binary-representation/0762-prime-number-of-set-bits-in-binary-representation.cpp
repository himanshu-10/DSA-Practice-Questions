class Solution {
public:
    
    bool checkPrime(int number){
        if (number <= 1) {
        return false;
        }

        // Check for divisibility from 2 to the square root of the number
        for (int i = 2; i <= sqrt(number); ++i) {
            if (number % i == 0) {
                // If the number is divisible by any number in this range, it is not                prime
                return false;
            }
        }

        // If no divisors were found, the number is prime
        return true;
    }
    
    int cntSetBit(int n){
        
        int cnt = 0;
        while(n>0){
            int last = n & 1;
            if(last == 1) cnt++;
            n = n >> 1;
        }
        
        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        
        // for each number : set bit ko cnt kr lo,, 
        // agr set bit cnt prime hai to 
        // ans++;
        //else move foreward
        
        // return ans
        int ans = 0;
        for(int i = left ; i<= right ;i++){
            int count = cntSetBit(i);
            if(checkPrime(count)){
                ans++;
            }
        }
        return ans;
        
    }
};