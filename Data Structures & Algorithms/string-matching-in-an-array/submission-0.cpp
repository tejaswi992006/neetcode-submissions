class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(i==j)
                {
                    continue;//here 0==0  it goes to 0==1 
                }
                if(words[j].find(words[i])!=string::npos)
                {
                    ans.push_back(words[i]);
                    break;//here comparision stops after findig one word 
                }
            }
        }
        return ans;
    }
};