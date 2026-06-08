class Solution {
public:
    int findClosest(int x, int y, int z) {
        int m=abs(z-x);
        int n=abs(z-y);
        if(m<n){
            return 1;
        }else if(m>n){
            return 2;
        }else{
            return 0;
        }
    }
};