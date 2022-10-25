#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum = 0;
	for(int i=0;i<k;i++){
		sum += a[i];
	}
	int res = sum,index = 0;
	for(int i=k;i<n;i++){
		sum = sum - a[i - k] + a[i];
		if(sum > res){
			res = sum;
			index = i-k+1;
		}
	}
	cout<<res<<endl;
	for(int j=0;j<k;j++){
		cout<<a[index+j]<<" ";
	}
	cout<<endl;
}


