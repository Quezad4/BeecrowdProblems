#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1010];
bool vis[1010];
int cont = 1;

void dfs(int u){
    vis[u] = true;
    for(auto v : adjList[u]){
        if(!vis[v]){
            cont++;
            dfs(v);
        }
    }
}


int main(){
    //freopen("saida.txt", "w", stdout);
    int N, M;
    while(scanf("%d %d", &N, &M)!=EOF){
        for(int i = 0; i<M; i++){
            int x,y;
            scanf("%d%d", &x, &y);
            adjList[x].push_back(y);
            adjList[y].push_back(x);
        }
        int start;
        scanf("%d", &start);
        dfs(start);
        memset(vis,false,sizeof(vis));
        printf("%d\n", cont);
        cont  = 1;
        for(int i = 0; i<1010; i++){
            adjList[i].clear();
        }
    }
}
