#include<bits/stdc++.h>
using namespace std;

void Go() {
	cout << "?" ;
	fflush(stdin);
	if (cin.get()=='.') exit(0);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		testCase();
		cout<<endl;
	}
}
