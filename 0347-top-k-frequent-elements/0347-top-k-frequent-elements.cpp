class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for (auto& it : mpp) {
            freq.push_back({it.first, it.second});
        }
        sort(freq.begin(), freq.end(),
             [](pair<int, int>& a, pair<int, int>& b) {
                 return a.second > b.second;
             });
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};