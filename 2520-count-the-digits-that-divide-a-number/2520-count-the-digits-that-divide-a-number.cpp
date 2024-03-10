class Solution {
public:
    int countDigits(int num) {
//         int cnt = 0;
//         while(num > 0){
//             int last = num % 10;
//             if(num % last == 0) cnt++;
//             num = num/10;
//         }
        
//         return cnt;
        
        int cnt = 0;
        int original_num = num; // Store the original number
        
        while (num > 0) {
            int last = num % 10;
            if (last != 0 && original_num % last == 0) // Avoid division by zero and check divisibility
                cnt++;
            num = num / 10;
        }
        
        return cnt;
    }
};