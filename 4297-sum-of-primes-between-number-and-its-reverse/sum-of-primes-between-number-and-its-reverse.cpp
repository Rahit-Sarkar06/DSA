class Solution {
public:
    bool prime(int num) {
        if (num <= 1)
            return false;
        if (num == 2)
            return true;
        if (num % 2 == 0)
            return false;

        for (int i = 3; i * i <= num; i += 2) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {

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