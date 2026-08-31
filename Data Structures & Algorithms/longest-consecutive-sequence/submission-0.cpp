class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>st;
        // cconversion of array to set
        for(auto num:nums){
            st.insert(num);
        }
        // now we need to check for the start elements
        int maxLen = 0;
        for(auto num:st){
        int runningLen = 1;
        int startElem = num;
            if(!st.count(num-1)){
                // it is the starting element
                while(st.count(startElem+1)){
                startElem++;
                runningLen++;
                }
                maxLen = max(maxLen , runningLen);
            }


        }
        return maxLen;

    }
};
