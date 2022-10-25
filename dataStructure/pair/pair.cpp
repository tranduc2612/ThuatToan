#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	pair<int,int> a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second = i;  
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		cout<<a[i].second<<" ";  
	}
}

