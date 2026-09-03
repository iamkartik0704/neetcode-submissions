class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
        int n = temperatures.size();
        vector<int>result(n,0);
        for(int i=0;i<n;i++){
            auto curr = temperatures[i];

            while(!st.empty() && st.top().second < curr){
                result[st.top().first] = i-st.top().first;
                st.pop();
                
            }
            st.push({i,curr});
        }
        return result;
    }
};
