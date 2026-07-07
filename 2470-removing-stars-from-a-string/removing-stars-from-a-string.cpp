class Solution {
public:
    string removeStars(string s) {
        vector<char> stack;
        for(auto ch:s){
            if( ch == '*'){
                if(stack.size() > 0) stack.pop_back();
            }
            else{
                stack.emplace_back(ch);
            }
        }
        string result(stack.begin(), stack.end());
        return result;
    }
};