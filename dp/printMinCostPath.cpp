#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
void dfs(vector<string>&ans,int n,int i,int j,string path);
int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			int temp;
			cin>>temp;
			arr[i][j] = temp;
		}
	}
	
	int dp[n][n];
	memset(dp,-1,sizeof(dp));
	dp[0][0] = arr[0][0];
	for (int i = 1; i < n; ++i)
	{
		dp[0][i] = dp[0][i-1]+arr[0][i];		
	}
	for (int i = 1; i < n; ++i)
	{
		dp[i][0] = dp[i-1][0]+arr[i][0];			
	}

	

	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < n; ++j)
		{
			dp[i][j] = min(dp[i-1][j],dp[i][j-1])+arr[i][j];	
		}
	}


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<dp[i][j]<<" "; 
		}
		cout<<endl;
	}


	// lets print path
	// we'll use dfs

	cout<<endl;

	vector<string>ans;
	dfs(ans,n,0,0,"");

	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i]<<" ";
	}


}

void dfs(vector<string>&ans,int n,int i,int j,string path){
	if(i==(n-1) && j==(n-1)){
		ans.push_back(path);
		return;
	}

	if(i>=n || j>=n){
		return;
	}

	if(dp[i][j+1]<dp[i+1][j]){
		path.push_back('H');
		dfs(ans,n,i,j+1,path);
	}else if(dp[i][j+1]>dp[i+1][j]){
		path.push_back('V');
		dfs(ans,n,i+1,j,path);
	}else if(dp[i][j+1]==dp[i+1][j]){
		path.push_back('H');
		dfs(ans,n,i,j+1,path);
		path.pop_back();

		path.push_back('V');
		dfs(ans,n,i+1,j,path);
		path.pop_back();
	}
	return;

}
