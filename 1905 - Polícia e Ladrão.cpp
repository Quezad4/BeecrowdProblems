#include <iostream>
using namespace std;
int matriz[5][5];

int isValid(int i, int j){
	if(i<0 or i>=5 or j<0 or j>=5 or matriz[i][j] == 1){
        return 0;
    }
    return 1;
}

int dfs(int i, int j){
    if(isValid(i,j) == 0 ){
        return 0;
    }
    matriz[i][j] = 1;
    if(i == 4 and j == 4){
        return 1;
    }
    if(dfs(i+1,j) == 1){
        return 1;
    }
    if(dfs(i-1,j) == 1){
        return 1;
    }
    if(dfs(i,j-1) == 1){
        return 1;
    }
    if(dfs(i,j+1) == 1){
        return 1;
    }
    return 0;
}

int main(){
    int valor;
    int N;
    cin >> N;
    for(int k = 0; k<N; k++){
		for(int i = 0; i<5; i++){
			for(int j= 0; j<5; j++){
				cin >> valor;
				matriz[i][j] = valor;
			}
		}
		if(dfs(0,0) == 1){
			cout << "COPS" << endl;
		}
		else{
			cout << "ROBBERS" << endl;
		}
	}
}
