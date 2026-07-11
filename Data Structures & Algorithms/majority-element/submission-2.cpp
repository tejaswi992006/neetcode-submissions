class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();

        // Count frequency of each element
        for (int i = 0; i < n; i++) {
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = 1;
            } else {
                mp[nums[i]]++;
            }
        }

        // Find the majority element
        for (auto it : mp) {
            if (it.second > n / 2) {
                return it.first;
            }
        }

        return -1; // This line will never execute because a majority element always exists.
    }
};