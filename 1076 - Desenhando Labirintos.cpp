#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int count = 0; 
vector<int> adjList[10001];
bool vis[10001];
void dfs(int x){
	vis[x] = true;
	for(int i = 0; i<adjList[x].size(); i++){
		int v = adjList[x][i];
		if(vis[v] == false){
			count++;
			dfs(v);
		}
	}
	
}
int main(){
	int N;
	int V, A,x,y,inicio;
	cin >> N;
	for(int i = 0; i<N; i++){
		memset(vis,0,sizeof(vis));
		cin >> inicio;
		cin >> V >> A;
		for(int j = 0; j<A; j++){
			cin >> x >> y;
			adjList[x].push_back(y);
			adjList[y].push_back(x);
		}
		for(int i = 0; i<V ; i++){
			if(!vis[i]){
				dfs(i);
			}
		}
		cout << count*2 << endl;
		count = 0;
		for(int j = 0; j<V; j++){
			adjList[j].clear();
		}
	}
}
