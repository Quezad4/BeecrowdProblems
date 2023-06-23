#include <iostream> 
#define ii pair <int,int>
#include <queue> 
#include <cstring>
using namespace std;
int vis[10001];
int inverte(int numero){
    int inv = 0;
    while(numero >= 10){
        inv += numero%10;
        inv *= 10;
        numero = numero/10;
    }
    inv += numero;
    return inv;
}

int bfs(int orig,int dest){
    queue<pair<int,int>> fila;
    vis[orig] = 1;
    fila.push({orig,0});
    while(!fila.empty()){
        ii u = fila.front();
        fila.pop();
        if(u.first == dest){
            return u.second;
        }
        if(u.first + 1 <=10000 and !vis[u.first +1]){
            fila.push(ii(u.first +1, u.second +1));
            vis[u.first+1] =  1;
        }
        if(inverte(u.first) <=10000 and !vis[inverte(u.first)]){;
            fila.push(ii(inverte(u.first), u.second +1));
            vis[inverte(u.first)] = 1;
        }
    }
}
int main(){
    int N, A, B, r;
    cin >> N;
    for(int i = 0; i< N; i++){
		memset(vis,0,sizeof(vis));
        cin >> A >> B;
        r = bfs(A,B);
        cout << r << endl;
    }
}
