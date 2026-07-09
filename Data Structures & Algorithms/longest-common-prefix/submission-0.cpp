class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first = strs[0];

        for (int j = 0; j < first.size(); j++) {
            for (int i = 1; i < strs.size(); i++) {
                if (j == strs[i].size() || first[j] != strs[i][j]) {
                    return first.substr(0, j);
                }
            }
        }

        return first;
    }
};
