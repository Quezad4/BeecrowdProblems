#include <bits/stdc++.h>
#define pii pair<pair<int,int>,int>
#define ff first.first
#define fs first.second
#define saida freopen("saida.txt", "w",stdout)
using namespace std;

stack<int> s;
vector<int> adjList[2010];
vector<int> adjList2[2010];
bool vis[2010];

void dfs1(int u){
	vis[u] = true;
	for(int v:adjList[u]){
		if(vis[v] == false){
			dfs1(v);
		}
	}
	s.push(u);
}
void dfs2(int u){
	vis[u] = true;
	for(int v:adjList2[u]){
		if(vis[v] == false){
			dfs2(v);
		}
	}
}

int main(){
	int N, M;
    cin>>N >> M;
    int x, y, p;
    int count = 0;
    while(N!=0 or M!=0){
		for(int i = 0; i<M; i++){
			cin >> x >> y >> p;
			x--; y--;
			adjList[x].push_back(y);
			adjList2[y].push_back(x);
			if(p == 2){
				adjList[y].push_back(x);
				adjList2[x].push_back(y);
			}
		}
		for(int j = 0; j<N; j++){
			if(vis[j] == false){
				dfs1(j);
			}
		}
		memset(vis,false,sizeof(vis));
		while(!s.empty()){
			int v = s.top();
			s.pop();
			if(vis[v] == false){
				count++;
				dfs2(v);
			}
		}
		if(count == 1){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
		count = 0;
		for(int k =0; k<N; k++){		
			adjList[k].clear();
			adjList2[k].clear();

		}
		memset(vis,false,sizeof(vis));
		cin >> N >> M;
		
	}
    
}
