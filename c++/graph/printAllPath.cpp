#include<bits/stdc++.h>
using namespace std;

void printAllPath(vector<pair<int,int> > g[],int source,int dest,bool visited[],string psf){
	if(source==dest){
		cout<<psf<<endl;
		return;
	}

	visited[source] = true;

	for (int i = 0; i < g[source].size(); i++)
	{	
		if(visited[g[source][i].first] == false){

			printAllPath(g,g[source][i].first,dest,visited,psf+to_string(g[source][i].first));

		}
	}

	visited[source]=false;

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
	
	cin >> source>>dest;

	bool visited[V+1];
	memset(visited,false,sizeof(visited));

	printAllPath(g,source,dest,visited,to_string(source)+"");

}