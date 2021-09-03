
#include<bits/stdc++.h>
using namespace std;



int main (){
  	
    string Y = "amanamana";
    string X = "manan";
    int m = X.length();
    int n = Y.length();
    int dp[m+1][n+1];
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j= 1; j <= n; j++)
        {
            if(X[i-1]==Y[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
                ans = max(ans,dp[i][j]);
            }
        }
    }

 for (int i = 0; i <=m; i++)
    {
        for (int j= 0; j <= n; j++)
        {
           cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Length of LCS: " << ans;
 
    return 0;
 
}