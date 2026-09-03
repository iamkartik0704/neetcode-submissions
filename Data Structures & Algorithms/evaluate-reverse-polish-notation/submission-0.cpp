class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(const auto& token:tokens){
            // token is a string data type
            if(token=="+" || token=="-" ||token=="*" ||token=="/"){
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.pop();

                if(token == "+") st.push(val2+val1);
                else if(token == "-") st.push(val2-val1);
                else if(token == "*") st.push(val2*val1);
                else if(token == "/") st.push(val2/val1);
            }

            else{
                    st.push(stoi(token));
                }
            }
        
        return st.top();
    }
};
