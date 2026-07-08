class Solution {
public:
    long long sumAndMultiply(int n) {
        long long digit = 0;
        int x = 0;
        int sum = 0;
        while (n > 0) {
            if (n % 10 != 0) {
                digit += pow(10, x) * (n % 10);
                x++;
            }
            sum += (n % 10);
            n /= 10;
        }
        return sum * digit;
    }
};