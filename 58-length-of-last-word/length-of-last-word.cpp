class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.size();
      int i=n-1;
      int count=0;
      while(i>=0){
        if(s[i]==' ' && count==0){
            i--;
        }
        if(s[i]==' ' && count!=0){
            return count;
        }else if(s[i]!=' '){
            count++;
            i--;
        }
      }
      if(s[++i]==s[0]){
        return count;
      }else{
        return 0;
      }
    }
};