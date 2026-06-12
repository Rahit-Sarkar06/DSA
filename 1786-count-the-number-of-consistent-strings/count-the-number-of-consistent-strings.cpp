class Solution {
public:
bool isValid(const string& s, const string& allowed) {
    return s.find_first_not_of(allowed) == string::npos;
}
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            if(isValid(words[i],allowed)){
                cnt++;
            }
        }
        return cnt;
    }
};