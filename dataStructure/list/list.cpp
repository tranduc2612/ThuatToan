#include<bits/stdc++.h>
using namespace std;
#define B 1000000
int main(){
	int n;
	cin>>n;
	list<int> v1(1,1);
	for(int i=2;i<=n;i++){
		long long m = 0;
		for(auto it = v1.begin();it!=v1.end();it++)
		{
			m += *it*i;
			*it=m%B;
			m /= B;
		}
		while(m){
			v1.push_front(m%B);
			m/=B;
		}
	}
	cout<<v1.front();
	v1.pop_front();
	for(auto v:v1){
		cout<<setw(6)<<setfill('0')<<fixed<<v;
	}
}

