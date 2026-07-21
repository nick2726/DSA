class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char ch : s) {
            if (isalnum(ch)) {
                str += tolower(ch);
            }
        }
        return str ==  string(str.rbegin(), str.rend());
    }
};