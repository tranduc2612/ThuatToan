#include<bits/stdc++.h>
using namespace std;
struct bag{
	int n,a[105],b[105],c[105][105]={},M;
	void sol(){
		cin>>n>>M;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=M;j++){
			c[i][j]=j<a[i]?c[i-1][j]:max(c[i-1][j],b[i]+c[i-1][j-a[i]]);
		}
	}
	cout<<"Tong kt max:"<<c[n][M]<<"\n";
	trace(n,M);
	}
	void trace(int n,int M){
		if(c[n][M]) return;
		while(c[n][M]==c[n-1][M]){
			n--;
			trace(n-1,M-a[n]);
			cout<<"\nChon vat"<<n<<" kt "<<a[n]<<" gt "<<b[n];
		}
	}
};
int main(){
	bag B;
	B.sol(); 
}

