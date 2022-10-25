#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<double> q;
	int n,k;
	cin>>n>>k;
	
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	
	while(q.size()>1){
		for(int i=0;i<k-1;i++){
			q.push(q.front());
			q.pop(); // xoa de dua lai len tren dau (k = 3 thi chi dua 2 cai len dau con xoa cai thu 3)
		}
		q.pop(); // xoa phan tu can xoa
	}
	
	cout<<q.front();
}

