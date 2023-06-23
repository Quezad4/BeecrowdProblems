#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int> > adjList[10010], adjList2[10010];
int dist[10010];





void dijsktra(int u){
	priority_queue< pair<int,int >, vector<pair<int,int > >, greater<pair<int,int > > > f;
	memset(dist,1000000, sizeof(dist));
	dist[u] = 0;
	f.push({0,u});
	while(!f.empty()){
		int u = f.top().second;
		int w = f.top().first;
		f.pop();
		if(w > dist[u]) continue;
		for(auto v: adjList2[u]){
			int aux = v.first + w;
			if(dist[v.second] > aux){
				dist[v.second] = aux;
				f.push({aux,v.second});
			}
		}
	}
}


int main(){
	int N, M, x, y, w;
	while(cin >> N >> M){
		for(int i = 0; i< M; i++){
			cin >> x >> y >> w;
			adjList[x].push_back({w,y});
			adjList[y].push_back({w,x});
		}
		for(int k = 1; k<=N; k++){
			for(auto i: adjList[k]){
				for(auto j: adjList[i.second]){
					adjList2[k].push_back({(i.first+j.first),j.second});
					adjList2[j.second].push_back({(i.first+j.first),k});
				}
			}
		}
		//~ for(int i = 1; i<=N; i++){
			//~ cout << "vertice: " << i << endl;
			//~ for(int j = 0; j<(int)adjList2[i].size(); j++){
				//~ cout << adjList2[i][j].second << " ";
			//~ }
			//~ cout << endl;
		//~ }
		dijsktra(1);
		if(dist[N] >= 1000000){
			cout << -1 << endl;
		}
		else{
			cout << dist[N] << endl;
		}
		for(int i = 0; i<=N; i++){
			adjList[i].clear();
			adjList2[i].clear();
		}
		
	}
}
