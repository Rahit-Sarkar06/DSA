class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag=true;
        int n=s.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()!=t.size()) return false;
        int i=0;

        while(i<n){
            if(s[i]!=t[i]){
                return false;
            }
            i++;
        }
        return true;
       
    }
};