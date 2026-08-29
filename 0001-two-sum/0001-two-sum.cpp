class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        /* for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(nums[i]+nums[j]==target){
                     return {i,j};
                 }
             }
         }
         return {-1,-1};

         //0(n^2)

        // vector<int> ans;
        sort(nums.begin(), nums.end());
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            if (nums[start] + nums[end] == target) {
                return {start, end};
            } else if (nums[start] + nums[end] > target) {
                end--;
            } else {
                end++;
            }
        }
        return {-1, -1};

        */

        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
            if (mpp.find(diff) != mpp.end()) {
                return {mpp[diff], i};
            }
            mpp.insert({nums[i], i});
        }
        return {-1, -1};
    }
};