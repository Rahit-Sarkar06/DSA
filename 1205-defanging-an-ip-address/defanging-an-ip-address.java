class Solution {
    public String defangIPaddr(String address) {
        String p = "";
        int n = address.length();
        for (int i = 0; i < n; i++) {
            if (address.charAt(i) == '.') {
                p += "[.]";
            } else {
                p += address.charAt(i);
            }
        }
        return p;
    }
}