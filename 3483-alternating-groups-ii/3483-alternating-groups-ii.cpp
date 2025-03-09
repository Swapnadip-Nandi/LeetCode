class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int res = 0;
        int left = 0;
        int n = colors.size();
        for (int right = 0; right < n + k - 1; right++) {
            // Skip entire subarray if adjacent colors are the same
            if (colors[right % n] == colors[(right - 1 + n) % n]) {
                left = right;
            }
            if (right - left + 1 == k) {
                res++;
                left++;
            }
        }
        return res;
    }
};
