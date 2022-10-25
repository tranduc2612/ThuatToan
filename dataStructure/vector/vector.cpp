#include<bits/stdc++.h>
using namespace std;
int main(){
	char x[] = "hanoimuathu";
	vector<char> v3(x,x+5);
	vector<double> v2(5,4.2);
	v2.insert(v2.begin(),2);
	// lap truyen thong
	cout<<"Vi du 1\n";
	for(int i=0;i<v2.size();i++){
		cout<<v2[i] << " ";
	}
	//lap xuoi 
	cout<<"\nVi du 2\n";
	for(auto it=v3.begin();it!=v3.end();it++){
		cout<<*it<<" ";
	}
	// lap foreach
	v3.resize(20,'a');
	cout<<"\nVi du 3\n";
	for(auto v:v3){
		cout<<v<<" ";
	}
}

