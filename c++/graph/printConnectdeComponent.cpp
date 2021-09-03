#include<bits/stdc++.h>
using namespace std;

void printConnectedComponent(vector<pair<int,int> > g[],int source,bool visited[],vector<int>&temp){
	visited[source] = true;
	temp.push_back(source);
	for (int i = 0; i < g[source].size(); i++)
	{	
		if(visited[g[source][i].first] == false){

			printConnectedComponent(g,g[source][i].first,visited,temp);

		}
	}

}

int main(){
	int V,E,source,dest;
	cin >> V >> E;
	vector<pair<int,int> > g[V+1]; 	// 1-indexed adjacency list for of graph

	int a,b,wt;
	for(int i = 0; i<E ; i++){
		cin >> a >> b >> wt;
		g[a].push_back(make_pair(b,wt));
		g[b].push_back(make_pair(a,wt));
	}	
	
	cin >> source;

	bool visited[V+1];
	memset(visited,false,sizeof(visited));

	vector<vector<int>> ans;

	for (int i = 0; i < V; ++i)
	{
		if(visited[i]==false){
			vector<int> temp;
			printConnectedComponent(g,i,visited,temp);
			ans.push_back(temp);
		}
	}

	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size() ; ++j)
		{
			cout<<ans[i][j]<<" ";
		}

		cout<<endl;
	}


}