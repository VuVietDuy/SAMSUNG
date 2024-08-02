#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int v,e,u,x,y;
	cin>>v>>e>>u;
	vector<vector<int>> G;
	vector<bool> vt;
	G.resize(v+1);
	vt.resize(v+1, false);
	for(int i=0; i<e; i++) {
		cin>>x>>y;
		G[x].push_back(y);
		G[y].push_back(x);
	}
	queue<int> q;
	q.push(u);
	cout<<u<<" ";
	vt[u]=true;
	while(!q.empty()) {
		x = q.front();
		q.pop();
		for(int n : G[x]) {
			if(vt[n] == false) {
				q.push(n);
				cout<<n<<" ";
				vt[n]=true;
			}
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
