class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int cnt = 1;

        for (int i = 0; i < n - 1; i++) {
            if (chars[i] == chars[i + 1]) {
                cnt++;
            } else {
                char m = chars[i];
                chars.push_back(m);

                if (cnt > 1) {
                    string s = to_string(cnt);
                    for (char c : s) {
                        chars.push_back(c);
                    }
                }

                cnt = 1;
            }
        }

        char m = chars[n - 1];
        chars.push_back(m);

        if (cnt > 1) {
            string s = to_string(cnt);
            for (char c : s) {
                chars.push_back(c);
            }
        }

        for (int i = 0; i < n; i++) {
            chars.erase(chars.begin());
        }

        return chars.size();
    }
};