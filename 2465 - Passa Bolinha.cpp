#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define pii pair<pair<int,int>,int>
#define ff first.first
#define fs first.second
using namespace std;
int N; 
int matrix[101][101];
bool vis[101][101];
bool isValid(int i, int j){
	if(j>=0 and j<N and i>=0 and i<N) {
		return true;
	}
	return false;
}
int bfs(int x1,int x2){
	int valor;
	queue<pair<pair<int,int>,int> >fila;
	vis[x1][x2] = true;
	fila.push({{x1,x2},0});
	while(!fila.empty()){
		pii u = fila.front();
		fila.pop();
		if(isValid(u.ff+1,u.fs) and !vis[u.ff+1][u.fs] and matrix[u.ff][u.fs] <= matrix[u.ff+1][u.fs]){
			fila.push(pii({{u.ff+1,u.fs},u.second+1}));
			vis[u.ff+1][u.fs] = true;
		}
		if(isValid(u.ff-1,u.fs) and !vis[u.ff-1][u.fs] and matrix[u.ff][u.fs] <= matrix[u.ff-1][u.fs]){
			fila.push(pii({{u.ff-1,u.fs},u.second+1}));
			vis[u.ff-1][u.fs] = true;
		}
		if(isValid(u.ff,u.fs+1) and !vis[u.ff][u.fs+1] and matrix[u.ff][u.fs] <= matrix[u.ff][u.fs+1]){
		fila.push(pii({{u.ff,u.fs+1},u.second+1}));
		vis[u.ff][u.fs+1] = true;
		}
		if(isValid(u.ff,u.fs-1) and !vis[u.ff][u.fs-1] and matrix[u.ff][u.fs] <= matrix[u.ff][u.fs-1]){
		fila.push(pii({{u.ff,u.fs-1},u.second+1}));
		vis[u.ff][u.fs-1] = true;
		}
		
	}
}





int main(){
	//vou mandar assim pq to com preguica de corrigir, mas o u.second é inutil nese caso, fiz na burrice, burro!
	cin >> N;
	int count = 0;
	int x1, x2; cin >> x1 >> x2;
	memset(vis,0,sizeof(vis));
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			cin >> matrix[i][j];
		}
	}
	bfs(x1-1,x2-1);
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			if(vis[i][j] == 1){
				count++;
			}
		}
	}
	cout << count << endl;
	
}
