class Solution {
public:
    int reverse(int x) {
        long long result=0;
        long long m=x;
        if(m<0) m=m*(-1);
        while(m>0){
            int rem=m%10;

        if (result > INT_MAX / 10 || result < INT_MIN / 10)
                return 0;
            result=result*10+rem;
            m/=10;
        }
        if(x<0){
            return (-1)*result;
        }
        return result;
    }
};