#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#define pii pair<pair<int,int>,int>
#define ff first.first
#define fs first.second
using namespace std;
int vetorCX[8] = {2,-2,1,-1,2,-2,1,-1};
int vetorCY[8] = {-1,1,-2,2,1,-1,2,-2};
int matrixXadrez[8][8];
bool vis[8][8];

bool isValid(int i, int j){
	if(j>=0 and j<8 and i>=0 and i<8) {
		return true;
	}
	return false;
}
int bfs(int i1, int j1, int i2, int j2){
	queue<pair<pair<int,int>,int> >fila;
	vis[i1][j1] = true;
	fila.push({{i1,j1},0});
	while(!fila.empty()){
		pii u = fila.front();
		fila.pop();
		for(int count = 0; count<8; count++){
			//cout << u.ff+vetorCX[count] << "  " << u.fs+vetorCX[count] << endl; 
			if(i2 == u.ff and j2 == u.fs){
				return u.second;
			}
			if(isValid(u.ff+vetorCX[count],u.fs+vetorCY[count]) and !vis[u.ff+vetorCX[count]][u.fs+vetorCY[count]]){
				fila.push({{u.ff+vetorCX[count], u.fs+vetorCY[count]},u.second+1});
				vis[u.ff+vetorCX[count]][u.fs+vetorCY[count]] = true;
			}
			
		}
	}
}

int main(){
	char a,b;
	int x1,x2,x3,x4;
	while(cin >> a >> x1 >> b >> x2){
		memset(vis,0,sizeof(vis));
		x3 = a -97;
		x4 = b -97;
		cout << "To get from "<< a << x1 << " to " << b << x2 << " takes " << bfs(x3,x1-1,x4,x2-1) << " knight moves."  << endl;
		
}
	
	
	
}
