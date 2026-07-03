class Solution {
public:
    bool prime(int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        if (n == 2 || n==3 || n==5 || n==7)
            return n;
        int rev = 0;
        int num = n;
        while (num > 0) {
            rev = rev * 10 + (num % 10);
            num /= 10;
        }
        int big, small;
        if (n > rev) {
            big = n;
            small = rev;
        } else {
            big = rev;
            small = n;
        }
        int sum = 0;
        for (int i = small; i <= big; i++) {
            if (i != 1 && prime(i) == true)
                sum += i;
        }
        return sum;
    }
};