#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v1(1,1);
	
	for(int i = 2;i<=n;i++){
		long long m = 0;
		for(auto &v:v1){
			m += i*v;
			v=m%10;
			m /= 10;
		}
		while(m){
			v1.push_back(m%10);
			m/=10;
		}
	}
	reverse(v1.begin(),v1.end());
	for(auto v:v1){
			cout<<v;
		}
}

// TH muon luu vao trong vector 100000 so
//
//#include<bits/stdc++.h>
//using namespace std;
//#define B 1000000
//int main(){
//	int n;
//	cin>>n;
//	vector<int> v1(1,1);
//	for(int i = 2;i<=n;i++){
//		long long m = 0;
//		for(auto &v:v1)
//		{
//			m += i*v;
//			v=m%B;
//			m /= B;
//		}
//		while(m){
//			v1.push_back(m%B);
//			m/=B;
//		}
//	}
//	reverse(v1.begin(),v1.end());
//	cout<<v1.front();
//	for(int i = 1;i<v1.size();i++){
//			cout<<setw(6)<<setfill('0')<<fixed<<v1[i];
//		}
//}

