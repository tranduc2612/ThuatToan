#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,M,q;
	int a[105],b[105],c[10004]={};
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1e4;j>=a[i];j--){
			c[j]=max(c[j],b[i]+c[j-a[i]]);
		}
	}
	while(q--){
		cin>>M;
		cout<<c[M]<<"\n";
	}
}

