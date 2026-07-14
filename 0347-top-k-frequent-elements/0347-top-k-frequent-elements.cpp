class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        vector<vector<int>> bucket(n + 1);
        for (auto& it : mpp) {
            bucket[it.second].push_back(it.first);
        }
        /*
        sort(freq.begin(), freq.end(),
             [](pair<int, int>& a, pair<int, int>& b) {
                 return a.second > b.second; // sorting done by the frequency
             });
             */
        vector<int> ans;
        for (int f = n; f >= 0 && ans.size() < k; f--) {
            for (int val : bucket[f]) {
                ans.push_back(val);
                if (ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};