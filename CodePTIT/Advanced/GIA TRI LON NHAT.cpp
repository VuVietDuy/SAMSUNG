#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n,m,q;
	cin>>n>>m;
	vector<int> a;
	a.resize(n+1,0);
	int u,v,k;
	for(int i=1; i<=m; i++) {
		cin>>u>>v>>k;
		for(int j=u; j<=v; j++) {
			a[j]+=k;
		}
	}
	cin>>q;
	while(q--) {
		cin>>u>>v;
		int ans = a[u];
		for(int j=u+1; j<=v; j++) {
			ans = max(ans, a[j]);
		}
		cout<<ans<<endl;
	}
}

int main() {
	testCase();
}
