#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b, c;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a>>b>>c;
		if(a==b) cout<<c<<endl;
		else if(b==c) cout<<a<<endl;
		else cout<<b<<endl;
	}
	return 0;
}