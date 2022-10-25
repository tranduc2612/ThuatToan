#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	q.push(12);
	q.push(25);
	q.push(14);
	cout<<"front: "<<q.front()<<endl;
	q.pop();
	cout<<"back:"<<q.back()<<endl;
	cout<<q.empty();
//	Cho so nguyen duong n,k va day so thuc A gom n phan tu. Tim ra day con lien tuc do dai k ma co tong lon nhat

	queue<double> q;
	int n,k;
	cin>>n>>k;
	double a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	double sum = 0,res = 0;
	for(int i=0;i<k;i++){
		
		sum += a[i];
		res += a[i];
		q.push(a[i]);
	}
	
	for(int i=k;i<n;i++){
		q.push(a[i]);
		sum -= q.front();
		sum += q.back();
		if(sum>res){
			res = sum;
		}
		q.pop();
	}
	cout<<res;
}

