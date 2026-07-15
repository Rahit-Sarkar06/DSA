class Solution {
public:
    string interpret(string command) {
        string s;
        int n = command.size();
        int i = 0;
        while (i < n) {
            if (command[i] == '(') {
                i++;
                if (command[i] == ')') {
                    s += 'o';
                    i++;
                } else {
                    while (command[i] != ')') {
                        s += command[i];
                        i++;
                    }
                    i++;
                }
            } else {
                s += command[i];
                i++;
            }
        }
        return s;
    }
};