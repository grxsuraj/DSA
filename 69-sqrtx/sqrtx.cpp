class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int low = 1, high = x, ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= x / mid) {
                ans = mid;        // store possible answer
                low = mid + 1;    // move right
            } else {
                high = mid - 1;   // move left
            }
        }

        return ans;
    }
};