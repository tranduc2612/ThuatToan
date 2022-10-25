#include<bits/stdc++.h>
using namespace std;
void sol(){
	map<char,int> K={{'C',12},{'H',1},{'O',16},{'(',0}};
	stack<int> S;
	string x;
	cin>>x;
	for(char c:x){
		if(K.find(c)!=K.end()){
			S.push(K[c]);
		}else if(c == ')'){
			int t = 0;
			while(S.top()){
				t+=S.top();
				S.pop();
			}
			S.top() = t;
		}else{
			S.top() *= c - '0'; // tru di ma acii de chuyen tu char sang so
		}
	}
	
	int t=0;
	while(S.size()){
		t+=S.top();
		S.pop();
	}
	cout<<t<<"\n";
}

int main(){
	int test;
	cin>>test;
	while(test--){
		sol();
	}
}

