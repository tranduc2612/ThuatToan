#include<bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool visited[1001];

//9 9
//1 2
//1 3
//1 5
//2 4
//3 6
//3 7
//3 9
//5 8
//8 9
//{[1,2,3,5],[2,4],[3,6,7,9],[5,8],[8,9]}

void inp(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);// neu la do thi co huong thi bo dong nay di
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	cout<<u<<" ";
	
	visited[u] = true;
	
	for(auto v:a[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

int main(){
	inp();
	dfs(1);
}












