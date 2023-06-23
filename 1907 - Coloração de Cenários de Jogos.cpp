#include <iostream>
#define ii pair <int,int>
#include <queue>
#include <cstring>
#include <utility>
using namespace std;
char matriz[1025][1025];
 void bfs(int N, int M, int i, int j){
	 queue<pair<int,int>> fila;
	fila.push({i,j});
	matriz[i][j] = 'o';
	 while(fila.empty() == 0){
		 ii u = fila.front();
		 fila.pop();
		 if(matriz[u.first][u.second+1] == '.'){
			 fila.push(ii(u.first, u.second + 1));
			 matriz[u.first][u.second+1] = 'o';
		 }
		 if(matriz[u.first][u.second-1] == '.'){
			 fila.push(ii(u.first, u.second - 1));
			 matriz[u.first][u.second-1] = 'o';
		 }
		 if(matriz[u.first+1][u.second] == '.'){
			 fila.push(ii(u.first+1, u.second));
			 matriz[u.first+1][u.second] = 'o';
		 }
		 if(matriz[u.first-1][u.second] == '.'){
			 fila.push(ii(u.first-1, u.second));
			 matriz[u.first-1][u.second] = 'o';
		 }
	 }
	 
 }
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N, M, count = 0; cin >> N >> M;
	char letra;
	for(int i = 0; i<N; i++){
		for(int j = 0; j<M; j++){
			cin >> letra;
			matriz[i][j] = letra;
			
		}
	}
	for(int i = 0; i<N; i++){
		for(int j = 0; j<M; j++){
			if(matriz[i][j] == '.'){
				count++;
				bfs(N,M,i,j);
			}
		}
	}
	cout << count << endl;
}

//esse codigo é antigo, nao se culpe :)
