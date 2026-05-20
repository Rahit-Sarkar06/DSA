class Solution {
public:
    int reverse(int x) {
        long long result=0;
        long long m=x;
        //int cnt=0;
        if(m<0) m=m*(-1);
        while(m>0){
            //if(cnt>5 && x>0) return 0;
            
            int rem=m%10;
            //cnt++;
        if (result > INT_MAX/10 || (result == INT_MAX/10 && rem > 7)) return 0;
        if (result < INT_MIN/10 || (result == INT_MIN/10 && rem < -8)) return 0;
            result=result*10+rem;
            m/=10;
        }
        if(x<0){
            return (-1)*result;
        }
        return result;
    }
};