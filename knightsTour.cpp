#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&arr,int x,int y,int n){
	if(x<n && x>=0 && y>=0 && y<n && arr[x][y]==-1){
		return true;
	}else{
		return false;
	}
}

int traverse(vector<vector<int>>&arr, int x ,int y,int n,int count){
	if(count == n*n){
		return 1;
	}
	int xnate[] = {1,2,2,1,-1,-2,-2,-1};
	int ynate[] = {2,1,-1,-2,-2,-1,1,2};

	

	for(int i=0;i<8;i++){
		if(isSafe(arr,x+xnate[i],y+ynate[i],n)){
			arr[x+xnate[i]][y+ynate[i]] = count;
			if(traverse(arr,x+xnate[i],y+ynate[i],n,count+1)==1){
				return 1;
			}else{
				arr[x+xnate[i]][y+ynate[i]] = -1;
			}
		}
	}
	return 0;

}


int main(){
	int x,y;
	cin>>x>>y;

int n = 8;

vector<vector<int>> arr(n,vector<int>(n,-1));

int count = 0;
arr[x][y] = 0;

int ans = traverse(arr,x,y,n,count+1);


for (int i = 0; i < n; ++i){
	for (int j= 0; j< n; ++j){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}

}