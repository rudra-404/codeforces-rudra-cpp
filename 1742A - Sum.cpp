#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		int a, b, c;
		cin>>a>>b>>c;
		if((a+b)==c || (c+b)==a || (a+c)==b)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}