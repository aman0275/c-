#include<bits/stdc++.h>
using namespace std;


//Not Complete
// https://www.youtube.com/watch?v=XmSOWnL6T_I


int main(){
	string str;
	cin>>str;
	int len = str.length();
	bool dp[len][len];
	memset(dp,false,sizeof(dp));
	int k=0;
	for (int i = 0; i < len; ++i){
		for (int j = 0; j < len-i; ++j){
			if(i==0){
				dp[j+i][j]= true;	
				continue;
			}
			if(str[j]==str[j]){
				if(dp[i+1][j-1]==true){
					dp[i][j]=true;
				}
			}

		}
	}

for (int i = 0; i < len; i++)
{
	for (int j = 0; j < len; j++)
	{
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}


}