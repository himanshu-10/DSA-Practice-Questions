class Solution {
public:
    int pivotInteger(int n) {
        
       int sumL = 0;
        int sumR = 0;

        for (int p = 1; p <= n; p++) {
            sumR += p;
        }

        for (int p = 1; p <= n; p++) {
            sumR -= p;
            if (sumL == sumR) {
                return p;
            }
            sumL += p;
        }

        return -1;
        
        
    }
};