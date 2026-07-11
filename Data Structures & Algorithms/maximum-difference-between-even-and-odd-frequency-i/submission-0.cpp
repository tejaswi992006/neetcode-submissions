class Solution {
public:
    int maxDifference(string s) {
        unordered_map<int,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int maxodd=0;
        int mineven=100000;
        for(auto it:mp)
        {
            int freq=it.second;
            if(freq%2!=0)
            {
                maxodd=max(maxodd,freq);
            }
            if(freq%2==0)
            {
                mineven=min(mineven,freq);
            }
        }
        return maxodd-mineven;
    }
};