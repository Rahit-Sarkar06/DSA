class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num<=1) return false;
        int count=1;
        int i=2;
        int j=num-1;
        while(i<j){
            if(i*j>num){
                j--;
            }else if(i*j<num){
                i++;
            }else{
                count=count+i+j;
                i++;
                j--;
            }
        }
        return count==num;
    }
};