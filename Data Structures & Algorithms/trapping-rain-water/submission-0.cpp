class Solution {
public:
    int trap(vector<int>& height) {
        // create a prefix max array and a suffix max array and then find the water at each location and simply sum that up
    int n = height.size();
    vector<int>prefix(n,0);
    vector<int>suffix(n,0);
    int left = 0;
    int right = n-1;
    int i=0;
    prefix[0] = height[0];
    suffix[n-1] = height[n-1];
    // creating the prefix array
    for(int i=1;i<n;i++){
        // DP
        prefix[i]=max(prefix[i-1] , height[i]);
    }
    // creating the suffix array
    for(int i=n-2;i>=0;i--){
        suffix[i] = max(suffix[i+1] , height[i]);
    }
    int finalSum = 0;
    int runningSum = 0;
    for(int i=0;i<n;i++){
        runningSum = min(suffix[i] , prefix[i])-height[i];
        // between two blocks this is the water level
        finalSum+=runningSum;
    }
    return finalSum;
    }
};
