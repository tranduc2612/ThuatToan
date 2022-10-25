#include <bits/stdc++.h>
using namespace std;

bool blst(int a[],int n,int x){
	int l = 0,r = n - 1;
	while(l<=r){
		int m = (l+r)/2;
		if(x == a[m]){
			return true;
		}else if(a[m]<x){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	return false;
}

bool blstdq(int a[],int l,int r,int x){
	if(l>r){
		return false;
	}
	int m = (l+r)/2;
	if(a[m]==x){
		return true;
	}else if(a[m]<x){
		return blstdq(a,m+1,r,x);
	}else{
		return blstdq(a,l,m-1,x);
	}
}

int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	if(blstdq(a,0,n,k)){
		cout<<"found!";
	}else{	
		cout<<"not found!";
	}
}

	




