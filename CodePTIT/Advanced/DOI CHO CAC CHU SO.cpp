#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int k;
	cin>>k;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++) {
		if(k == 0) break;
		
		char c = '0';
		for(int j=i+1; j<s.length(); j++) {
			c = max(c, s[j]);
		}
		
		if(c <= s[i]) continue;
		
		string newz = s;
		for(int j = i+1; j<s.length(); j++) {
			if(s[j] == c) {
				string temp = s;
				swap(temp[i], temp[j]);
				newz = max(newz, temp);
			}
		}
		
		if(newz > s) {
			s = newz;
			k--;
		}
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
