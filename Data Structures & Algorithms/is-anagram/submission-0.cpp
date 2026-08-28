class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int>freq(26,0);
        for(int i=0;i<s.length();i++){
            char ch1 = s[i];
            char ch2 = t[i];
            freq[ch1-'a']++;
            freq[ch2-'a']--;
            
        }
        for(auto fre:freq){
            if(fre != 0)return false; 
        }
        return true;
    }
};
