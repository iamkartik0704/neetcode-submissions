class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
        int right = n-1;
        int maxWater = 0;
        while(left<right){
            int currWater = min(heights[left] , heights[right])*(right-left);
            maxWater = max(maxWater , currWater);
            heights[left]<heights[right]?left++:right--;
            
        }
        return maxWater;
    }
};
