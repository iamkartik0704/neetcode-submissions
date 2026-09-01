class Solution {
   private:
    string removeWhiteSpaces(string s) {
        string ans = "";
        for (char ch : s) {
            ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
            if (isalnum(static_cast<unsigned char>(ch))) {
                ans += ch;
            }
        }
        return ans;
    }

   public:
    bool isPalindrome(string s) {
        string ans = removeWhiteSpaces(s);
        int n = ans.size();
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != ans[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
