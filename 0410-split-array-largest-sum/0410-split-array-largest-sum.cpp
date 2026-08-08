class Solution {
public:
    int helper(vector<int>& nums, int limit, int k) {
        int cnt = 1, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > limit) {
                cnt++;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (k > n) { // Because the students are greater than the books than
                     // each of them wont get atleast one book
            return -1;
        }
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (helper(nums, mid, k)) {
                high = mid - 1;
                ans = mid;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};