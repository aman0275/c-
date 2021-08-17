#include<bits/stdc++.h>
using namespace std;

// not working for -ve value

int main(){

int n = 0,m=0;
cin>>n;
cin>>m;
int arr[m][3];

for(int i=0;i<m;i++){
for(int j=0;j<3;j++){
	int temp;
    cin>>temp;
    arr[i][j] = temp;
}
}

int ans[n+1];
memset(ans,0,sizeof(arr));

for(int i=0;i<m;i++){
	ans[arr[i][0]] =ans[arr[i][0]] + arr[i][2];
	if(arr[i][1]+1<=n){
	ans[arr[i][1]+1] =ans[arr[i][1]+1] - arr[i][2];	
	}
	
}

int sum =0;
for (int i = 0; i < n; ++i)
{
	sum+=ans[i];
	ans[i]= sum;	

}

for (int i = 0; i < n; ++i)
{
	cout<<ans[i]<<" ";
}


}