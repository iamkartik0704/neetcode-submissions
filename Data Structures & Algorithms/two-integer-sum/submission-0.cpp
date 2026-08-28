class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        // it will be storing the index and the differnce corresponding to it
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            auto it = mpp.find(diff);
            if (it != mpp.end()) {
                ans.push_back(mpp.find(diff)->second);
                // access key using second
                ans.push_back(i);
                return ans;
            }
            mpp[nums[i]] = i;
            // key -> difference
            // value -> index

        }
        return ans;
    }
};
