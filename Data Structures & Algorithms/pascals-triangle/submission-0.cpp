class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>>ans;
        vector<int>pv;
        for(int row=0;row<numRows;row++)
        {
            vector<int>curr(row+1);
            for(int col=0;col<=row;col++)
            {
                 if(col==0 || col==row)
                 {
                    curr[col]=1;
                 }
                 else
                 {
                    curr[col]=pv[col-1]+pv[col];
                 }
            }
            ans.push_back(curr);
            pv=curr;
        }
        return ans;
    }
};