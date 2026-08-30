
// method2 - more optimal
class Solution {
private:
    string getFreqString(string str){
        vector<int>freq(26,0);
        // counting the frequency of each char
        for(char ch:str){
            freq[ch-'a']++;
        }
        // creating a string like a2b3c0.......
        string ans="";
        char ch='a';
        for(auto it:freq){
            // ans.push_back(ch);
            ans += to_string(it);
            ans.push_back((it));
            ch++;
        }
        return ans;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // we will be using the frequency string as the key for the unordered_map
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;
        // key->frequency string
        // value->string array
        for(auto str:strs){
            string freqString = getFreqString(str);
            // if(mpp.find(freqString)!=mpp.end()){
            //     ans.push_back(str);
            // }
            // else{
            //     mpp[freqString] = str;
            // }
            mpp[freqString].push_back(str);
            // no need to use the if else condition
        }
        for(const auto& ch:mpp){
            ans.push_back(ch.second);
        }
        return ans;
    }
};



// method 1 using the sorted string
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>>ans;
//         unordered_map<string,vector<string>>mpp;
//         for(int i=0;i<strs.size();i++){

//             // auto it = mpp.find(strs[i]);
//             auto it = strs[i];
//             auto it1 = strs[i];
//             sort(it.begin(), it.end());
//             // took the first word and then sorted it
//             // check the availability of the sorted string in the map
//             // if(mpp.find(it)==mpp.end()){
//             //     // list.push_back(it1);
//             // // mpp[strs[i]] = it;
//             // mpp[it] = {strs[i]};
//             // }
//             // list.push_back(it1);
//             // ans.push_back(list);
//             mpp[it].push_back(it1);

//         }
//         for (const auto& mp:mpp){
//             ans.push_back(mp.second);
//         }
//         return ans;
//     }
// };
