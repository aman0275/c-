class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int sum=0;
        vector<vector<int>> dp(coins.size()+1,vector<int>(amount+1));
        
        for(int i=0;i<=coins.size();i++){
            for(int j=0;j<=amount;j++){
                
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
                
                if(i>=1 && coins[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }
                
                if(i>=1 && coins[i-1]<=j){
                    dp[i][j]= dp[i-1][j]+dp[i][j-coins[i-1]];
                }
                
                cout<<dp[i][j];
            }
            cout<<endl;
        }
        
        return dp[coins.size()][amount];
    }
};