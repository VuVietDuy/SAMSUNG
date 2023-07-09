#include<bits/stdc++.h>
using namespace std;

void testCase() {
	string s;
	cin>>s;
	int i = s.length()-1;
	while(i>=0 && s[i]=='1') i--;
	if(i>=0) s[i] = '1';
	for(int j = i+1; j<s.length(); j++) {
		s[j] = '0';
	}
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
