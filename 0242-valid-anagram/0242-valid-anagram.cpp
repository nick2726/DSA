class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        unordered_map<int,int> mpp1;
        for(int i=0;i<n;i++){
            mpp1[s[i]]++;
        }
        unordered_map<int,int> mpp2;
        for(int i=0;i<m;i++){
            mpp2[t[i]]++;
        }
        if(mpp1==mpp2){
            return true;
        }
        return false;

        
    }
};