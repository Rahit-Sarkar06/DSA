class Solution {
public:
    string interpret(string command) {
        string s;
        int n = command.size();
        int i = 0;
        while (i < n) {
            if (command[i] == 'G') {
                s += 'G';
                i++;
            } else if (command[i] == '(' && command[i + 1] == ')') {
                s += 'o';
                i += 2;
            } else {
                s += "al";
                i += 4;
            }
        }
        return s;
    }
};