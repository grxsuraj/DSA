class Solution {
public:
    bool isAnagram(string s, string t) {

        // length alag hai toh anagram ho hi nahi sakta
        if (s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        // count s ke chars
        for (char c : s) {
            freq[c]++;
        }

        // subtract t ke chars
        for (char c : t) {
            freq[c]--;
        }

        // koi bhi 0 se alag hai toh false
        for (auto& [key, val] : freq) {
            if (val != 0) return false;
        }

        return true;
    }
};