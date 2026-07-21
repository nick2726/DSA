class Solution {
public:
    bool helper(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r]) {
                return helper(s, l + 1, r) || helper(s, l, r - 1);
            }
            l++;
            r--;
        }
        return true;
    }
};