#include <iostream>
#include <queue>
#include <cstring>
#define ii pair <int,int>
using namespace std;
int vis[100001];
int bfs(int origem, int dest){
    queue<pair<int,int>> fila;
    vis[origem] =1;
    fila.push({origem,0});
    while(!fila.empty()){
        ii u = fila.front();
        fila.pop();
        if(u.first == dest){
            return u.second;
        }
        if(u.first - 1 > 0 and !vis[u.first -1 ]){
            fila.push(ii(u.first -1, u.second + 1));
            vis[u.first- 1] =  1;
        }
        if(u.first%2 == 0 and !vis[u.first/2] ){
            fila.push(ii(u.first/2, u.second +1));
            vis[u.first/2] =  1;
        }
        if(u.first + 1 <=100000 and !vis[u.first +1 ] ){
            fila.push(ii(u.first +1, u.second +1));
            vis[u.first+1] =  1;
        }
        if(u.first *2 <= 100000 and !vis[u.first *2]){
        fila.push(ii(u.first*2, u.second +1));
        vis[u.first*2] = 1;
        }
        if(u.first *3 <= 100000 and !vis[u.first *3]){
        fila.push(ii(u.first*3, u.second +1));
        vis[u.first*3] = 1;
        }
        
    }
    return -1;
}




int main(){
    int O, D, QT, valor, x;
    cin>> O >> D >> QT;
    while(O != 0 or D != 0 or QT != 0){
		memset(vis,0,sizeof(vis));
        for(int i = 0; i<QT; i++){
            cin >> valor;
            vis[valor] = 1;
        }
         x = bfs(O,D);
         cout << x << endl;
        cin>> O >> D >> QT;
    }
}
