#include <iostream>
using namespace std;
int selecSort(string &v, int N){
	int aux,aux2,numtroca=0;
	for(int i = 0; i<N-1; i++){
	aux = i,aux2=i;
		for(int j = i+1; j < N; j++){
			if(v[j]< v[aux]){
				aux = j;
			}

		}			
		if(aux!=aux2)
		{
			numtroca++;
		}
		swap(v[aux], v[i]);
	}
	return numtroca;
	
}
int main(){
	int N,X; cin >> N;
	string a;
	for(int i = 0; i<N; i++){
		cin >> X;
		cin>>a;
				
		if(selecSort(a,X)==1){
			cout << "There are the chance." << endl;
		}
		else{
			cout << "There aren't the chance." << endl;
		}
	}	
}
