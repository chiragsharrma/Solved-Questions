class Solution {
public:
    long long  dp[31][1002];
    long M = 1000000007;
    int numRollsToTarget(int n, int k, int target) 
    {
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=target;j++)
            {
                for(int x=1;x<=k;x++)
                    if(j-x>=0) dp[i][j]= ((dp[i][j]%M) +  (dp[i-1][j-x]%M))%M;
            }
        }
        return dp[n][target];
    }  
    
};
