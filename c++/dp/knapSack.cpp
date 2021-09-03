class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    int dp[1001][1001];
    int solve(int w, int wt[], int val[], int n){
       if(w==0 || n==-1){
           return 0;
       }
       
       if(dp[n][w]!=-1){
           return dp[n][w];
       }
       if(w<wt[n]){
           return dp[n][w] = solve(w,wt,val,n-1);
       }
       
       return dp[n][w] = max(solve(w,wt,val,n-1),val[n] + solve(w-wt[n],wt,val,n-1)); 
    }
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       dp[n][w];
       memset(dp,-1,sizeof(dp));
       return solve(w,wt,val,n-1);
    }
};
