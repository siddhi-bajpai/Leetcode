class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long a=0;a*a<=c;a++){
            double b = sqrt(c - a * a);      // Compute `b` as the square root of `c - a^2`
            if (b == (int)b) {                // Check if `b` is an integer
                return true;                  // If `b` is an integer, return true
            }
        }
        return false;
    }
};