#include <iostream>
#include <queue>
using namespace std;
int main(){
	int flag, passa;
	cin >> flag;
	while(flag != 0){
		deque <int> fila;
		deque<int> filadisc;
		for(int i = 1; i<=flag; i++){
			fila.push_front(i);
		}
		for(int i = 0; i<flag-1; i++){
			filadisc.push_front(fila.back());
			fila.pop_back();
			passa = fila.back();
			fila.push_front(passa);	
			fila.pop_back();
		}
		cout << "Discarded cards: ";
		for(int i = 0; i<flag-2; i++){
			cout << filadisc.back() << ", ";
			filadisc.pop_back();
		}
		cout << filadisc.back() << endl;
		cout << "Remaining card: " << fila.front() << endl;
		cin >> flag;
	}	
}


