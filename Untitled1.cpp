#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a[1000],vitri,min=INT_MAX,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<min){
			min = a[i];
			vitri = i;
		}
	}
	
	cout<<"Menor valor: "<<min<<endl; 
	cout<<"Posicao: "<<vitri<<endl; 
}

