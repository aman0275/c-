class Solution{
public:
	vector<int> topsort(int V, vector<int> adj[]){
		vector<int> in(V,0);
		vector<int> ans;
		queue<int> q;
		for (int i = 0; i < V; ++i)
		{
			for(auto j:adj[i]){
				in[j]++;
			}
		}

		for (int i = 0; i < V; ++i)
		{
			if(in[i]==0){
				q.push(i);
			}
		}

		int c = q.size();

		while(!q.empty()){
			int td = q.front();
			q.pop();
			ans.push_abck(td);
			for(auto x:adj[td]){
				in[x]--;
				if(in[x]==0){
				q.push(x);
				c++;	
				} 
			}
		}
		if(c==V){
		return false ;	
		}else{
		return true;	
		} 

	}
}