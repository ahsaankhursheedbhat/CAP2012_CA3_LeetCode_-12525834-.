class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;      // F(0)
        if (n == 1) return 1;      // F(1)

        int prev2 = 0;             // F(i-2)
        int prev1 = 1;             // F(i-1)

        for (int i = 2; i <= n; i++) {
            int current = prev1 + prev2;   // F(i)
            prev2 = prev1;                 // shift window forward
            prev1 = current;
        }
        return prev1;              // F(n)
    }
};