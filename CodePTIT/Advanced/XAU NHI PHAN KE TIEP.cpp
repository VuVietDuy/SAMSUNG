#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	int l = s.length() - 1;
	while(l >= 0 && s[l] == '1') {
		s[l] = '0';
		l--;
	}
	if(l>0) s[l] = '1';
	cout<<s;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
