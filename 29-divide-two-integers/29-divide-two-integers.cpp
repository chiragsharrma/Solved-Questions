class Solution {
public:
    int divide(int x, int y) { 
        bool negative = 0; // negative == 1 denotes that the final answer is negative
        if ((x < 0 && y > 0) || (x > 0 && y < 0))
            negative = 1;  
        int count = 0;
		// since negative int has larger range than positive int by 1, 
		// negative is used here
        if (x > 0)
            x = -x;
        if (y > 0)
            y = -y;
        int div = y; // used to store original divisor
        int base = 1, sum = 0;
        while (sum >= x) {
			// boundry check. every variable is negative, except for base
			
            if (INT_MIN - sum <= y && sum + y >= x) { 
                count -= base;
                sum += y;
				
				// every time y becomes y * 2(e.g., -3  -->  -6  -->  -12)
                if (y >= INT_MIN >> 1 && base < INT_MAX >> 1) {
                    y += y;
                    base <<= 1;
                }   
            }
            else { // y becomes y / 2, -12  -->  -6 
                if (y == div) {
                    break;
                }
                y >>= 1;
                base >>= 1;
            }
            
        }
        if (count == INT_MIN && !negative) // overflow: INT_MIN / -1 
            return INT_MAX;
        return negative? count : -count;
    }
};