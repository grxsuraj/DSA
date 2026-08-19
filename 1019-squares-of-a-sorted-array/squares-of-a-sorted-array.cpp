class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;

        for (int k = n - 1; k >= 0; k--) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                result[k] = leftSq;
                left++;
            } else {
                result[k] = rightSq;
                right--;
            }
        }

        return result;
    }
};