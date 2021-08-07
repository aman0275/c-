//C++ Code
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        int dp[n+1][amount+1];
        
        for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=amount;++j)
            {
                if(j==0)
                    dp[i][j] = 0;
                else if(i==0)
                    dp[i][j] = 1e5;
                else if(coins[i-1]>j)
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = min(1 + dp[i][j-coins[i-1]], dp[i-1][j]);
            }
        }
        return dp[n][amount]>1e4 ? -1:dp[n][amount];
    }
};





class Solution {
public:
    int dp[10001];
    int solve(vector<int>&coins, int n, int m){
        if(m==0)
            return 0;
        int ans=INT_MAX;
        if(dp[m]!=-1)
            return dp[m];
        for(int i=0;i<n;i++){
            if(coins[i]<=m){
                int temp;
                if(dp[m-coins[i]]!=-1) temp=dp[m-coins[i]];
                else temp=solve(coins,n,m-coins[i]);
                if(temp!=INT_MAX && temp+1<ans){
                    ans=temp+1;
                }
            }
        }
        return dp[m]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int m=amount;
        memset(dp,-1,sizeof(dp));
        return solve(coins,n,m)==INT_MAX ? -1:solve(coins,n,m);
    }
};