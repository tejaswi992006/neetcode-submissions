class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);
        int n=s.length();
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<n;i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(int x: count)
        {
            if(x!=0)
            {
                return false;
            }
        }
        return true;
    }
};
