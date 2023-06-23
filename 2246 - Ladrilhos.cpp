#include <bits/stdc++.h>
using namespace std;


int matrix[2010][2010];
bool vis[2010][2010];
int n, m;
int vx[4] = {1,-1,0,0};
int vy[4] = {0,0,-1,1};
int ccount = 0;



bool isValid(int i, int j){
	if(i<0 or j<0 or i>=n or j>=m){
		return false;
	}
	return true;
}

void dfs(int i, int j, int letra){
	vis[i][j] = true;
	ccount++;
	for(int k = 0; k<4; k++){
		int u = i+vx[k];
		int v = j+vy[k];
		if(!vis[u][v] and matrix[u][v] == letra and isValid(u,v)){
			dfs(u,v,matrix[u][v]);
			
		}
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a =10000000;
	cin >> n >> m;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> matrix[i][j];
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(!vis[i][j]){
				ccount = 0;
				dfs(i,j,matrix[i][j]);
				a = min(a,ccount);
				
			}
			
		}
	}
	cout << a << endl;
}
