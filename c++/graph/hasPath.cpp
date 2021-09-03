#include<bits/stdc++.h>
using namespace std;

bool hasPath(vector<pair<int,int> > g[],int source,int dest,bool visited[]){
	if(source==dest){
		return true;
	}

	visited[source] = true;

	for (int i = 0; i < g[source].size(); i++)
	{	
		if(visited[g[source][i].first] == false){

			bool ngb_has_path = hasPath(g,g[source][i].first,dest,visited);
			if(ngb_has_path){
				return true;
			}

		}
	}

	return false;

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

	bool ans = hasPath(g,source,dest,visited);

	cout<<"path = "<<ans;
}