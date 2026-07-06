class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        {
            for(int i :nums)
            {
                if(hash.find(i)!=hash.end())
                {
                    return true;
                }
                else
                {
                    hash.insert(i);
                }
            }
            return false;
        }
    }
};