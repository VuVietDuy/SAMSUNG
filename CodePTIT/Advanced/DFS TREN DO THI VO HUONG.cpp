#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> G;
vector<bool> visited;
int v,e,u,x,y,k;

void dfs(int u) {
	cout<<u<<" ";
	visited[u] = true;
	for(int x : G[u]) {
		if(visited[x] == false) {
			dfs(x);
		}
	}
}

void testCase() {
	cin>>v>>e>>u;
	G.clear();
	G.resize(v+1);
	visited.clear();
	visited.resize(v+1, false);
	for(int i=0; i<e; i++) {
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	dfs(u);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
