class Solution {
    private:
        vector<int>findNse(vector<int>&heights){
            int n = heights.size();
            vector<int>nse(n);
            stack<int>st;
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                nse[i] = st.empty()?n:st.top();
                st.push(i);
                // undefined index
            }
        return nse;
}
        vector<int>findPse(vector<int>&heights){
            int n = heights.size();
            stack<int>st;
            vector<int>pse(n);
            for(int i=0;i<n;i++){
                while(!st.empty() && heights[st.top()]>=heights[i]){
                    st.pop();
                }
                pse[i] = st.empty()?-1:st.top();
                st.push(i);
            }
            return pse;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nse = findNse(heights);
        vector<int>pse = findPse(heights);
        int currArea = 0;
        int maxArea = 0;
        for(int i=0;i<n;i++){
            currArea = heights[i]*(nse[i] - pse[i]-1);
            // in between these(open braces)
            maxArea = max(maxArea , currArea);
        }
        return maxArea;
    }
};
