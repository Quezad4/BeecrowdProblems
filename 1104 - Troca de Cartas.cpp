#include <iostream>
#include <set>
using namespace std; 
int main(){
    int N, M, alice, bia, count = 0;
    set<int>a;
    set<int>b;
    set<int>::iterator it;
    cin >> N >> M;
    while(N != 0 or M != 0){
		for(int i = 0; i<N; i++){
			cin >> alice;
			a.insert(alice);
		}
		for(int i = 0; i<M; i++){
			cin >> bia;
			b.insert(bia);
		}
		if(a.size() <= b.size()){
			for(it = a.begin(); it != a.end(); it++){
				if(b.count(*it) == 0 ){
					count ++;
				}
			}
		}
		else{
			for(it = b.begin(); it != b.end(); it++){
				if(a.count(*it) == 0){
					count ++;
				}
			}
		}
		cout << count << endl;
		cin >> N >> M;
		a.clear();
		b.clear();
		count = 0;
	}
}
