class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length() - 1;
        int i = n;

        // Step 1: trailing spaces skip karo (end se)
        for (; i >= 0 && s[i] == ' '; i--) {
        }

        int count = 0;

        // Step 2: jab tak letters milte rahein, count badhao
        for (; i >= 0 && s[i] != ' '; i--) {
            count++;
        }

        return count;
    }
};