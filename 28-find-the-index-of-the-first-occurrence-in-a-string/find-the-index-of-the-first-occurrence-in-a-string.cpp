class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int n=needle.size();
        while(i<n && j<haystack.size()){

            if(needle[i]==haystack[j]){
                i++;
                j++;
            }else{
                j=j-i+1;
                i=0;
     
        }
    }
        if(i==n){
            return j-i;
        }else{
            return -1;
        }
    }
};