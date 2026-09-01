class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i=0;i<n-2;i++){
            // if the smallest number is positive then no case is possible
            if(nums[i]>0) break;

            // remove dulpicacy
            if(i>0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[left]+nums[right]+nums[i];
                if(sum<0){
                    left++;
                }
                else if(sum>0){
                    right--;
                }
                else{
                    ans.push_back({nums[left] , nums[right] , nums[i]});
                    // now we need to skip the left and right duplicates
                    while(left<right && nums[left] == nums[left+1]) left++;
                    while(left<right && nums[right] == nums[right-1]) right--;

                    left++;
                    right--;
                }
            }


        }
        return ans;
    }
};
