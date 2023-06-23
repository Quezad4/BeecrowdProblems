#include <iostream>
#include <vector>
#include <utility>
using namespace std;
char matriz[51][51];
vector<pair<int,int>>v;
int isValid(int N, int M, int i, int j){
	if(i<0 or i>=N or j<0 or j>=M or matriz[i][j] == 'T' or matriz[i][j] == 'X'){
	    return 0;
	}
	return 1;
	
}
void dfs(int N, int M, int i, int j){
	if(matriz[i][j] == 'A'){
		matriz[i][j] = 'T';
	}
	if(isValid(N,M,i,j+1) == 1){
		dfs(N,M,i,j+1);
	}
	if(isValid(N,M,i,j-1) == 1){
		dfs(N,M,i,j-1);
	}
	if(isValid(N,M,i+1,j) == 1){
		dfs(N,M,i+1,j);
	}
	if(isValid(N,M,i-1,j) == 1){
		dfs(N,M,i-1,j);
	}
	
}
int main(){
    int N,M;
    char a;
    cin >> N >> M;
    while(N != 0 or M !=0){
        for(int i = 0; i<N; i++){
            for(int j = 0; j<M; j++){
                cin >> a;
                matriz[i][j] = a;
            }
        }
        for(int i = 0; i<N; i++){
			for(int j = 0; j<M; j++){
				if(matriz[i][j] == 'T'){
					v.push_back(make_pair(i,j));
				}
			}
		}
		for(int k = 0; k<(int)v.size(); k++){
			dfs(N,M,v[k].first,v[k].second);
		}
        for(int i = 0; i<N; i++){
			for(int j = 0; j<M; j++){
				cout << matriz[i][j];
			}
			cout << endl;
			v.clear();
		}
		cout << endl;
		cin >> N >> M;
        
    }
    
}
