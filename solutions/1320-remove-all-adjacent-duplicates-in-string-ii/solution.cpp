class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<pair<char, int>> st;
        for(const char& c : s) {
            if(st.size() == 0 || st.back().first != c) {
                st.push_back({c, 1});
            } else {
                st.back().second++;
            }
            if(st.back().second == k) {
                st.pop_back();
            }
        }
        string ans;
        for(const auto& p : st) {
            ans.append(p.second, p.first);
        }
        return ans;
    }
};

