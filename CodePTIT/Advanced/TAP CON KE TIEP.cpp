#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int n, k, a[1000];
	cin>>n>>k;
	for(int j=1; j<=k; j++) {
		cin>>a[j];
	}
	int i = k;
	while(i>0 && a[i] == n-k+i) {
		i--;
	}
	if(i == 0) {
		for(int j=1; j<=k; j++) {
			cout<<j<<" ";
		}
		return;
	}
	a[i]++;
	for(int j=i+1; j<=k; j++) {
		a[j] = a[j-1] + 1;
	}
	for(int j=1; j<=k; j++) {
		cout<<a[j]<<" ";
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
