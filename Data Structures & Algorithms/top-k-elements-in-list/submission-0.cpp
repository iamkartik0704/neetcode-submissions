class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       for(auto num:nums)
       {
        // making the frequency 
        mpp[num]++;
       } 
    //    now we need to save this in a multimap which would be sorting on the basis of freq
    multimap<int,int,greater<int>>freqMap;
    for(auto pair:mpp){
        freqMap.insert({pair.second,pair.first});
    }
    vector<int>ans;
    int count=0;
    for(auto pair:freqMap){
        ans.push_back(pair.second);
        count++;
        if(count==k) break;
    }
    return ans;
    }
};
