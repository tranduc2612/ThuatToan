#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,res=0;
	cin>>n;
	vector<int> V(n);
	for(auto &v:V){
		cin>>v;
	}
	sort(V.begin(),V.end(),greater<int>());
	queue<int> Q;
	for(auto v:V){
		while(Q.size()!=0 && Q.back()+v<=Q.front()){
			Q.pop();
		}
		Q.push(v);
		if(res<Q.size()){
			res = Q.size();
		}
	}
	if(res>2){
		cout<<res;
	}else{
		cout<<"Khong the tao ra day thoa man";
	}
}

