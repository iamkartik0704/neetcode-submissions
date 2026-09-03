class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =  position.size();
        stack<double>st;
        vector<pair<int,int>>car;
        for(int i=0;i<n;i++){
            // create arrays of each car having position and speed on the basis of sorted descending order
            // sort(position.begin(),position.end(), greater<int>());
            car.push_back({position[i] , speed[i]});
        }

        sort(car.begin(), car.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first > b.first; 
    });
        for(int i=0;i<n;i++){
            double time = (double)(target - car[i].first)/car[i].second;
            if(st.empty()){
                st.push(time);
            }
            else if(time>st.top()){
                st.push(time);
                // cant reach the car
            }
            // st.push(time);
        }
        return st.size();

    }
};  
