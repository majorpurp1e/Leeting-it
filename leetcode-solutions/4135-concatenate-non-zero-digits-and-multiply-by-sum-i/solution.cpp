class Solution {
public:
    long long sumAndMultiply(long n) {
        long sum = 0;
        long x = 0;
        for (long i = n; i > 0; i = i / 10) {
            long sub = i % 10;
            if (sub != 0) {
                x = (x * 10) + sub;
            }
        }
        long rev = 0;
        for (long i = x; i > 0; i = i / 10) {
            long sub = i % 10;
            rev = (rev * 10) + sub;
            sum = sum + sub;
        }
        long ret = rev * sum;
        return ret;
    }
};
