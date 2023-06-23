#include <bits/stdc++.h>
using namespace std;
#define saida freopen("saida.txt", "w",stdout)


vector<int>adjList[110];
map<string,int> facil;
map<string,int>::iterator it;
int capacity[110][110];
int M;



int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, 100000});

    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adjList[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(110);
    int new_flow;
    while (new_flow = bfs(s, t, parent),new_flow) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}


int main(){
	int T,N;
	string stringa, stringb;
	cin >> T;
	facil.insert({"L",50}); 
	facil.insert({"XL", 51});
	facil.insert({"XXL",52});
	facil.insert({"XS",53});
	facil.insert({"M",54});
	facil.insert({"S",55});
	for(int i = 0; i<T; i++){
		cin >> N >> M;
		for(int j =0; j<M; j++){
			cin >> stringa >> stringb;
			it = facil.find(stringa);
			adjList[j].push_back(it->second);
			adjList[it->second].push_back(j);
			
			capacity[j][it->second] = 1;
			
			it = facil.find(stringb);
			adjList[j].push_back(it->second);
			adjList[it->second].push_back(j);
			
			capacity[j][it->second] = 1;
		}
		for(it = facil.begin(); it!= facil.end(); it++){
			adjList[it->second].push_back(100);
			adjList[100].push_back(it->second);
			capacity[it->second][100] = N/6;
		}
		for(int j = 0; j<M; j++){
			adjList[60].push_back(j);
			adjList[j].push_back(60);
			capacity[60][j] = 1;
		}
		if(maxflow(60,100) == M){
			cout << "YES" <<endl;
		}
		else{
			cout << "NO" << endl;
		}
		for(int j = 0; j<110; j++){
			adjList[110].clear();
		}
		memset(capacity,0,sizeof(capacity));
			
	}
	
}
