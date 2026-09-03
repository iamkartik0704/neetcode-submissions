class Solution {
    private:
    int bsearch(vector<int>& nums,int target , int low  , int high){
        if(low>high) return -1;
        int mid = low+(high-low)/2;
        if(nums[mid] == target) return mid;
        return (nums[mid]<target)?bsearch(nums,target,mid+1,high):bsearch(nums,target,low,mid-1);
        
    }
public:
    int search(vector<int>& nums, int target) {
        // use binary search
        int n = nums.size();
        return bsearch(nums , target , 0 , n-1);

    }
};
