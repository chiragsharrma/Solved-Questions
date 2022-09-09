class Solution {
public:
    int strStr(string haystack, string needle) {
        const int n = haystack.size();
        const int m = needle.size();
        
    
        if(m>n)
        {
            return -1;
        }
	
        if(m==n && haystack==needle)
        {
            return 0;
        } 
        
        for(int i=0;i<=n-m;i++)
        {
            string s = haystack.substr(i,m);
            if(s==needle)
                return i;
        }
        return -1;
    }
};