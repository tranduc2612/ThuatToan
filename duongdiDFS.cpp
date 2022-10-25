#include<bits/stdc++.h>
using namespace std;

int n,m,s,t;
vector<int> adj[1001];
bool visited[1001];
int parent[1001];

void dfs(int u){
	visited[u] = true;
	for(int v:adj[u]){
		if(!visited[v]){
			// cha cua v la u
			parent[v] = u;
			dfs(v);
		}
	}
}

void path(int s,int t){
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(parent));
	dfs(s);
	if(!visited[t]){
		cout<<"khong co duong di";
	}else{
		// truong hop co duong di thi truy van duong di
		vector<int> path;
		while(s != t){
		path.push_back(t);
		//lan nguoc lai
		t = parent[t];
		}
		path.push_back(s);
		reverse(path.begin(),path.end());
		for(int x:path){
			cout<<x<<" ";
		}	
	}
	
}

//test
//10 8
//1 2
//2 3
//2 4
//3 6
//3 7
//6 7
//5 8
//8 9


int main(){
	cin>>n>>m>>s>>t;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	path(s,t);
	return 0;
}






