#include<bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>&vis,int x,int y,int n){
	if(x<n && x>=0 && y>=0 && y<n && vis[x][y]==-1){
		return true;
	}else{
		return false;
	}
}

void traverse(vector<vector<int>>&vis, int x ,int y,int n,int count){

	int xnate[] = {1,2,2,1,-1,-2,-2,-1};
	int ynate[] = {2,1,-1,-2,-2,-1,1,2};

	arr[x][y] = count;
	count++;
	for(int i=0;i<8;i++){
		if(isSafe(arr,x+xnate[i],y+ynate[i],n)){
			traverse(arr,x+xnate[i],y+ynate[i],n,count);
		}
	}
	return;
}


int main(){
	int x,y,tx,ty;
	cin>>x>>y;

int n = 8;

vector<vector<int>> vis(n,vector<int>(n,-1));
traverse(vis,x,y,n,1);


for (int i = 0; i < n; ++i){
	for (int j= 0; j< n; ++j){
		cout<<vis[i][j]<<" ";
	}
	cout<<endl;
}

}