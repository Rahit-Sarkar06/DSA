class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int r1 = 0;
        int r2 = 0;
        int c1 = 0;
        int c2 = 0;
        int i = 0;
        int m = 0;
        int n = 0;
        if (num1[0] == '-') {
            m = -1;
            i++;
        }
        while (num1[i] != '+') {
            r1 = r1 * 10 + (num1[i] - '0');
            i++;
        }
        i++;
        if (num1[i] == '-') {
            n = -1;
            i++;
        }
        while (num1[i] != 'i') {
            c1 = c1 * 10 + (num1[i] - '0');
            i++;
        }
        if (m == -1)
            r1 = r1 * (-1);
        if (n == -1)
            c1 = c1 * (-1);
        i = 0;
        m = 0;
        n = 0;
        if (num2[0] == '-') {
            m = -1;
            i++;
        }
        while (num2[i] != '+') {
            r2 = r2 * 10 + (num2[i] - '0');
            i++;
        }
        i++;
        if (num2[i] == '-') {
            n = -1;
            i++;
        }
        while (num2[i] != 'i') {
            c2 = c2 * 10 + (num2[i] - '0');
            i++;
        }
        if (m == -1)
            r2 = r2 * (-1);
        if (n == -1)
            c2 = c2 * (-1);
        int r = r1 * r2 - c1 * c2;
        int c = r1 * c2 + r2 * c1;
        string ans = to_string(r) + "+" + to_string(c) + "i";

        return ans;
    }
};