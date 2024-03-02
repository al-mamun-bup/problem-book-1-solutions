 string operator * (string a,  int b) {
        string output = "";
        while (b--) {
            output += a;
        }
        return output;
    }
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for (auto it : s) {
            if (it != ']') {
                st.push(it);
            } else {
                string temp;
                while (st.top() != '[') {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();

                string num;
                while (!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }
                int n = stoi(num);
                for (char c : (temp * n)) {
                    st.push(c);
                }
            }
        }
        string ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
