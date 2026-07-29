class Solution {
public:
    string smallestPalindrome(string s) {

        // Step 1: Count frequency of each character
        vector<int> freq(26, 0);
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        string middle = "";

        // Step 2: Build left half and find middle character
        for (int i = 0; i < 26; i++) {

            // Add half of the characters to left
            for (int j = 0; j < freq[i] / 2; j++) {
                left += char('a' + i);
            }

            // If frequency is odd, keep one character in middle
            if (freq[i] % 2 == 1) {
                middle = char('a' + i);
            }
        }

        // Step 3: Create right half by reversing left
        string right = left;
        reverse(right.begin(), right.end());

        // Step 4: Return final palindrome
        return left + middle + right;
    }
};