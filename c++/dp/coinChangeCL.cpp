class Solution
{
  public:
  
  long long int dp[1001][1001];
  
  long long int solve(int s[], int m, int n){
      if(m==-1 && n>0){
          return 0;
      }
      if(n==0){
          return 1;
      }
      if(n<0){
          return 0;
      }
      if(dp[m][n]!=-1){
          return dp[m][n];
      }
      
      return dp[m][n] = solve(s,m,n-s[m])+solve(s,m-1,n);
      
      
      
  }
    long long int count( int s[], int m, int n )
    {
       dp[m][n+1];
        //code here.
        for(int i=0;i<m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j] = -1;
            }
        }
        return solve(s,m-1,n);
    }
};