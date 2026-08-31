class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for (const auto&str:strs){
            s+=to_string(str.length())+'#'+str;
        }
        return s;
    }
    // encoding format:- 4#code

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length = stoi(s.substr(i, j-i));
            // j-i here represents the length for the numeric values
            string word = s.substr(j+1, length);
            ans.push_back(word);
            // update i as well
            i=j+length+1;
            // j is at the index of '#'

        }
        return ans;
    }
};
