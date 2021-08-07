#include<bits/stdc++.h>
using namespace std;

char arr[1001][1001];
int dp[1001][1001];

int coun(int n,int r, int c){

if(r==(0) && c==(0)){
return 1;
}

if(r<0 || c<0){
	return 0;
}

if(dp[r][c]!=0){
	return dp[r][c];
}


	dp[r][c] = coun(n,r-1,c) + coun(n,r,c-1);


return dp[r][c];

}


int main (){

int n;
cin>>n;

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n; ++j)
	{

		cin>>arr[i][j];
	}
}

int ans = coun(n,n-1,n-1);
cout<<ans<<"<-ans hai bhai";
 
	return 1;
}
