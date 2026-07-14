class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int curLen = 1, maxLen = 1;
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else if (nums[i] - nums[i - 1] == 1) {
                curLen++;
                maxLen = max(maxLen, curLen);
            } else {
                maxLen = max(maxLen, curLen);
                curLen = 1;
            }
        }
        return maxLen;
    }
};