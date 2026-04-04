class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[256] = {0};  // supports all ASCII chars
        
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {

            // If duplicate found, shrink window
            while (hash[s[right]] > 0) {
                hash[s[left]]--;
                left++;
            }

            // Add current character
            hash[s[right]]++;

            // Update answer
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};