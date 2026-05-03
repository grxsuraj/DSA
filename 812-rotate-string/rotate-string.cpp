class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        
        if (n != goal.length()) return false;

        // Try all rotations
        for (int i = 0; i < n; i++) {
            bool match = true;

            // Check character by character
            for (int j = 0; j < n; j++) {
                if (s[(i + j) % n] != goal[j]) {
                    match = false;
                    break;
                }
            }

            if (match) return true;
        }

        return false;
    }
};