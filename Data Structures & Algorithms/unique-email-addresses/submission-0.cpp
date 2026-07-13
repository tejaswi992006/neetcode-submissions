class Solution {
public:
    int numUniqueEmails(vector<string>& emails){
        unordered_set<string>res; 
        for(string email :emails)
        {
            int i= email.find('@');
            string local=email.substr(0,i);
            int n=email.length();
            string domain=email.substr(i,n);
            int pos=local.find('+');
            if(pos!=string::npos)
            {
                local=local.substr(0,pos);
            }
            string nlocal;    
            for(int i=0;i<local.length();i++)
            {
                if(local[i]=='.')
                {
                    continue;
                }
                else
                {
                    nlocal+=local[i];
                }
            }
            res.insert(nlocal+domain);
        }
        return res.size();
    }
};