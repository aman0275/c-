int dp[1001][1001];

int func(int x, int y, string s1 , string s2){

if(x==-1 || y==-1)return 0;

if(s1[x]==s2[y]){
	return dp[x][y] = 1+ func(x-1,y-1,s1,s2);
}

int a = func(x-1,y,s1,s2);
int b = func(x,y-1,s1,s2);
dp[x][y] = max(a,b);

}

// x,y are sizes of string
int lcs(int x, int y, string s1 , string s2){
memset(dp,-1,sizeof(dp));
return func(x-1,y-1,s1,s2);
}
