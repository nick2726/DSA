class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        /*
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }
        return false;

        // 0(n^2)


      sort(nums.begin(),nums.end());
      for(int i=n-1;i>0;i--){
          if(nums[i]==nums[i-1]){
              return true;
          }
      }
      return false;

      //0(n log n)


      */

        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second > 1) {
                return true;
            }
        }
        return false;

        //0(n)
    }
};