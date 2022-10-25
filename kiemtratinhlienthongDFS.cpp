#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool visited[1001];

void dfs(int u){
	visited[u] = true;
	for(int x: adj[u]){
		if(!visited[x]){
			dfs(x);
		}
	}
}

void connectedComponent(){
	int ans = 0;
	memset(visited,false,sizeof(visited));
	for(int i = 1;i<=n;i++){
		if(!visited[i]){
			ans++;
			dfs(i);
		}
	}
	cout<<ans<<endl;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	connectedComponent();
}






