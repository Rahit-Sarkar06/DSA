class Solution {
public:
    string convertDateToBinary(string date) {
        string s="";
        int i=0;
        int p=0;
        while(date[i]!='-'){
            int digit=date[i]-'0';
            p=(p*10)+digit;
            i++;
        }
        while(p>0){
            s+=(p%2+'0');
            p/=2;
        }
        i++;
        reverse(s.begin(),s.end());
        s+="-";
        p=0;
        while(date[i]!='-'){
            int digit=date[i]-'0';
            p=(p*10)+digit;
            i++;
        }
        string t="";
        while(p>0){
            t+=(p%2+'0');
            p/=2;
        }
        i++;
        reverse(t.begin(),t.end());
        t+="-";
        p=0;
        while(i<date.size()){
            int digit=date[i]-'0';
            p=(p*10)+digit;
            i++;
        }
        string l="";
        while(p>0){
            l+=(p%2+'0');
            p/=2;
        }
        reverse(l.begin(),l.end());

        return s+t+l;

    }
};