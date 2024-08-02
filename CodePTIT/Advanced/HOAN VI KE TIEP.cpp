#include<bits/stdc++.h>
using namespace std;


void testCase() {
	int n, a[1000];
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
	} 

	int i=n-1;
	while(i > 0 && a[i] > a[i+1]) {
		i--;
	}

	if(i > 0) {
		int j = n;
		while(a[j] < a[i]) {
			j--;
		}

		swap(a[i], a[j]);
	}

	int l = i + 1, r = n;
	while(l < r) {
		swap(a[l], a[r]);
		l++;
		r--;
	}

	for(int j = 1; j <= n; j++) {
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
	return 0;
}
