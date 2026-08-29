class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int dif=target-nums[i];
            if(mpp.find(dif)!=mpp.end()){
                return {mpp[dif],i};
            }
            mpp.insert({nums[i],i});
        }
        return {-1,-1};
        
    }
};