class Solution {
public:
    int lengthOfLastWord(string s)
    {
         int COUNT=0;
    reverse(s.begin(),s.end());  //O(nlogn)
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            COUNT++;
        }
		else{
            if(COUNT!=0)
            {
                break;
            }
        }
    }
    return COUNT;
        
    }
};