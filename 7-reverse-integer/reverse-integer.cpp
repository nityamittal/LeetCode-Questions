class Solution {
public:
    int reverse(int x) {
        int ans = 0; 
        while(x) {
            int rem = x % 10; 
            

            if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
                return 0;
            }
            
            ans = ans * 10 + rem; // Append the digit to the reversed number
            x = x / 10; // Remove the last digit from x
        }
        return ans; // Return the reversed number
    }
};