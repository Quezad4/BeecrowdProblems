#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M, K; cin >> N >> M >> K;
	int valor, count = 0;
	char LC;
	char matrix[N][M];
	for(int i = 0; i<N; i++){
		for(int j = 0; j<M; j++){
			matrix[i][j] = ' ';
		}
	}
	while(K){
		cin >> LC >> valor;
		if(LC == 'L'){
			if(count == 0){
				for(int j = 0; j<M; j++){
					matrix[valor-1][j] = 'R';
				}
			}
			else if(count == 1){
				for(int j = 0; j<M; j++){
					matrix[valor-1][j] = 'H';
				}
			}
			else if(count == 2){
				for(int j = 0; j<M; j++){
					matrix[valor-1][j] = 'C';
				}
			}
			else if(count == 3){
				for(int j = 0; j<M; j++){
					matrix[valor-1][j] = 'P';
				}
				
			}
		}
		else if(LC == 'C'){
			if(count == 0){
				for(int j = 0; j<N; j++){
					matrix[j][valor-1] = 'R';
				}
			}
			else if(count == 1){
				for(int j = 0; j<N; j++){
					matrix[j][valor-1] = 'H';
				}
			}
			else if(count == 2){
				for(int j = 0; j<N; j++){
					matrix[j][valor-1] = 'C';
				}
			}
			else if(count == 3){
				for(int j = 0; j<N; j++){
					matrix[j][valor-1] = 'P';
				}
			}
			
		}
		if(count == 3){
			count = 0;
		}else{
			count ++;
		}
		K--;
		
	}
	int count1,count2,count3,count4;
	count1=count2=count3=count4=0;
	for(int i = 0; i<N; i++){
		for(int j = 0; j<M; j++){
			if(matrix[i][j] == 'R'){
				count1++;
			}
			else if(matrix[i][j] == 'H'){
				count2++;
			}
			else if(matrix[i][j] == 'C'){
				count3++;
			}
			else if(matrix[i][j] == 'P'){
				count4++;
			}
		}
	}
	cout <<'R' << count1<<" " << 'H' << count2 <<" "<< 'C' << count3<<" " << 'P' << count4 << endl;
}
