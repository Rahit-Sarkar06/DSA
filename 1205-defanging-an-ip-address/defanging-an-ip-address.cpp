class Solution {
public:
    string defangIPaddr(string address) {
        string p;
        int n = address.size();
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (address[i] == '.') {
                p += "[.]";
            } else {
                p += address[i];
            }
        }
        return p;
    }
};