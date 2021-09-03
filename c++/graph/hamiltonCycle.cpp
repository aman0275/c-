#include<bits/stdc++.h>
using namespace std;

int v;
void hamilton(vector<pair<int,int> > g[],int source,unordered_set<int> visited,string psf,int os){
	if(visited.size()==v-1){
		cout<<psf<<endl;
		bool closing_edge = false;
			for (int i = 0; i < g[source].size(); i++){
				if(g[source][i].second==os){
					closing_edge = true;
					break;
				}
			}
			if(closing_edge){
				cout<<" Hamilton"<<endl;
			}

			
		return;
	}

	visited.insert(source);

	for (int i = 0; i < g[source].size(); i++)
	{	
		if(visited.find(g[source][i].first) != visited.end()){

			hamilton(g,g[source][i].first,visited,psf+to_string(g[source][i].first),os);

		}
	}

	visited.erase(visited.find(source));

}

int main(){
	int V,E,source,dest;
	cin >> V >> E;
	vector<pair<int,int> > g[V+1]; 	// 1-indexed adjacency list for of graph
	v=V;
	int a,b,wt;
	for(int i = 0; i<E ; i++){
		cin >> a >> b >> wt;
		g[a].push_back(make_pair(b,wt));
		g[b].push_back(make_pair(a,wt));
	}	
	
	cin >> source>>dest;

	unordered_set<int> visited;
	hamilton(g,source,visited,to_string(source)+"",source);

}