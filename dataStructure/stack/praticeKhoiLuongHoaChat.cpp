#include<bits/stdc++.h>
using namespace std;
void sol(){
	map<char,int> m{{'H',1},{'O',16},{'(',0},{'C',12}};
	stack<int> p;
	string s;
	cin>>s;
	for(char x:s){
		if(m.find(x)!=m.end()){
			p.push(m[x]);
		}else if(x == ')'){
			int sum = 0;
			while(p.top()){
				sum += p.top();
				p.pop();
			}
			p.top() = sum;
		}else{
			p.top() *= x - '0';
		}
	}
	int sum = 0;
	while(p.size())
	{
		sum += p.top();
		p.pop();
	}
	cout<<sum<<"\n";
}

int main(){
	int n;
	cin>>n;
	while(n--){
		sol();
	}
}
