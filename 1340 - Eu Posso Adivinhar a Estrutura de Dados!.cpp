#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
	int N, X, Y;
	int esse;
	while(cin >>N){
		stack<int>pilha;
		queue<int>fila;
		priority_queue<int> filap;
		int countpilha = 0, countfila = 0, countfilap = 0, countpop = 0;
		int counttot = 0;
		for(int i = 0; i<N; i++){
			cin >> X >> Y;
			if(X == 1){
				fila.push(Y);
				pilha.push(Y);
				filap.push(Y);
			}
			else{
				countpop++;
				if(pilha.top() == Y){
					pilha.pop();
					countpilha++;
				}
				if(fila.front() == Y){
					fila.pop();
					countfila++;
				}
				if(filap.top() == Y){
					filap.pop();
					countfilap++;
				}

			}
		}
		if(countpilha == countpop){
			counttot ++;
			esse = 1;
			
		}
		if(countfila == countpop){
			counttot++;
			esse = 2;
		}
		if(countfilap == countpop){
			counttot++;
			esse = 3;
		}
		if(counttot == 0){
			cout << "impossible" << endl;
		}
		else if(counttot >1){
			cout << "not sure" << endl;
		}
		else if(esse == 1){
			cout << "stack" << endl;
		}
		else if(esse == 2){
			cout << "queue" << endl;
		}
		else if(esse == 3){
			cout << "priority queue" << endl;
		}
		
	}
}
