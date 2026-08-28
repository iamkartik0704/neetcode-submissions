// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>>ans;

//     }
// };



// method 1 using the sorted string
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<strs.size();i++){

            // auto it = mpp.find(strs[i]);
            auto it = strs[i];
            auto it1 = strs[i];
            sort(it.begin(), it.end());
            // took the first word and then sorted it
            // check the availability of the sorted string in the map
            // if(mpp.find(it)==mpp.end()){
            //     // list.push_back(it1);
            // // mpp[strs[i]] = it;
            // mpp[it] = {strs[i]};
            // }
            // list.push_back(it1);
            // ans.push_back(list);
            mpp[it].push_back(it1);

        }
        for (const auto& mp:mpp){
            ans.push_back(mp.second);
        }
        return ans;
    }
};
