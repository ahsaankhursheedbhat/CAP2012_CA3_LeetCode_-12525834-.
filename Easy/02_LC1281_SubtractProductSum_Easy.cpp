class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;   // starts at 1 because we multiply into it
        int sum = 0;       // starts at 0 because we add into it

        while (n > 0) {
            int digit = n % 10;   // last digit of n
            product *= digit;     // multiply it in
            sum += digit;         // add it in
            n /= 10;              // remove the last digit
        }
        return product - sum;
    }
};