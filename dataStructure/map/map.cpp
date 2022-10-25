#include<bits/stdc++.h>
using namespace std;
int main(){
	map<char,int> K={{'C',12},{'H',1},{'O',16},{'(',0}};
	char x;
	cout<<"Nhap ki tu";
	cin>>x;
	if(K.find(x)==K.end()){
		cout<<"Khong co\n";
	}else{
		cout<<K[x];
	}
}

