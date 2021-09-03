#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b){
	if(a.first==b.first){
		return b.second<a.second;
	}else{
		return a.first<b.first;
	}
}

int main(){

	int n;
	cin>>n;
	vector <pair<int,int>>env;
	for(int i=0;i<n;i++){
		pair<int,int> temp;
		int l,w;
		cin>>l>>w;
		temp = {l,w};
		env.push_back(temp);
	}

	sort(env.begin(),env.end(),comp);

	int dp[n][3];
	for (int i = 0; i < n; ++i)
		{
			dp[i][0] = env[i].first;
			dp[i][1] = env[i].second;
			dp[i][2]=1;
		}	
	
	for (int i = 0; i < n; ++i){
		int maxi = 1;
		int j=i;
		while(j>=0){
			int temp=0;
			if(dp[j][0]<dp[i][0] && dp[j][1]>dp[i][1]){
				maxi = max(maxi,dp[j][2]+1);
			}
			j--;
		}
		dp[i][2] = maxi;
		}	

	for (int i = 0; i < n; ++i)
	{
		cout<<env[i].first<<" "<<env[i].second<<endl;
	}
	cout<<endl;
	for(int k=0;k<n;k++){
		cout<<dp[k][0]<<" "<<dp[k][1]<<"->"<<dp[k][2]<<endl;
	}
}