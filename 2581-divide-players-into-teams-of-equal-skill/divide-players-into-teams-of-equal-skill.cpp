class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();

        int m = skill[0] + skill[n - 1];
        int i = 1;
        int j = n - 2;
        long long sum = skill[0] * skill[n - 1];
        while (i < j) {
            if ((skill[i] + skill[j]) != m)
                return -1;
            sum += (skill[i] * skill[j]);
            i++;
            j--;
        }
        return sum;
    }
};