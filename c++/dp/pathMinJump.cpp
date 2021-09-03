#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin>>temp;
		arr[i] = temp;
	}

	int dp[n];
	
	memset(dp,INT_MAX,sizeof(dp));

	dp[n-1] = 0;
	for (int i = n-2; i>=0; i--)
	{
		int steps  = arr[i];
		int mi = INT_MAX;
		for(int j=1;j<=steps && i+j <n;j++){
			if((dp[i+j] != -1) && dp[i+j]<mi){
				mi = dp[i+j];
			}
		}
		if(mi!=INT_MAX){
			dp[i] = mi+1;
		}

	}

for (int i = 0; i < n; ++i)
{
	cout<<arr[i]<<" ";

}
cout<<endl;
for (int i = 0; i < n; ++i)
{

	cout<<dp[i]<<" ";
}

}