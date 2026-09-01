// class Solution {
//    private:
//     string removeWhiteSpaces(string s) {
//         string ans = "";
//         for (char ch : s) {
//             ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
//             if (isalnum(static_cast<unsigned char>(ch))) {
//                 ans += ch;
//             }
//         }
//         return ans;
//     }

//    public:
//     bool isPalindrome(string s) {
//         string ans = removeWhiteSpaces(s);
//         int n = ans.size();
//         for (int i = 0; i < ans.size()/2; i++) {
//             if (ans[i] != ans[n - i - 1]) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };





// using two pointer approach
class Solution {
   public:
    bool isPalindrome(string s) {
       int n = s.size();
       int left = 0;
       int right = n-1;
       while(left<right){
        if(!isalnum(s[left])){
            left++;
        }else if(!isalnum(s[right])){
            right--;
        }else{
            if(tolower(s[left])!=tolower(s[right])) return false;
            left++;
            right--;
        }
       }
       return true;
    }
};













