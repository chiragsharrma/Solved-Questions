class Solution {
public:
    int countAsterisks(string s) {
        int flag=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(flag==0 && s[i]=='*')
                ans++;
            if(flag==0 && s[i]=='|')
            {
                flag=1;
                continue;
            }
            if(flag==1 && s[i]=='|')
                flag=0;  
        }
        return ans;
    }
};