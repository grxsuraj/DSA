class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> mp;

        // s ke characters count karo
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // t ke characters se ghatao
        for (int i = 0; i < t.size(); i++) {
            mp[t[i]]--;
        }

        // check karo sab zero hain ya nahi
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second != 0) return false;
        }

        return true;
    }
};