#include<bits/stdc++.h>
using namespace std;



int main (){
int n;
cin>>n;
vector<long long> arr; 
for (int i = 0; i < n; ++i){
	int temp;
	cin>>temp;
	arr.push_back(temp);
}

int dp[2][n+1];
memset(dp,-1,sizeof(dp));

for (int i = 0; i < n; ++i)
{
	dp[0][i] = arr[i]; 
}

int j=0;
for (int i = 0; i < n; ++i)
{
	j=i;
	int maxa=1;
	while(j>=0){
		j--;
		if(dp[0][i]>dp[0][j]){
		maxa = max(maxa,dp[1][j]+1);
		}

	}
		dp[1][i] = maxa;


}
for (int i = 0; i < n; ++i)
{
	cout<<dp[0][i]<<" "<<dp[1][i];
	cout<<endl; 
}

}
