#include<bits/stdc++.h>
using namespace std;

bool visited[1001];
vector<int> a[1001];

void inp(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		cout<<v<<" ";
		for(int x:a[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}	
	}
}

int main(){
	inp();
	bfs(1);	
}






