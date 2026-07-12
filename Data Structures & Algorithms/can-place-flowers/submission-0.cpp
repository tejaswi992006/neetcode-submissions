class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int count=0;
        int i;
        for(i=0;i<arr.size();i++)
        {
            if((arr[i]==0)&& 
            (i==0||arr[i-1]==0)&& 
            (i==arr.size()-1||arr[i+1]==0))
            {
                arr[i]=1;
                count++;
            }
        }
        return count>=n;
    }
};