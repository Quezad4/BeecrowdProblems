#include <iostream>
#include <stack>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	stack<int> s;
	int N,x; cin >>N;
	string a;
	for(int i = 0; i<N; i++){
		cin >> a;
		if(a == "PUSH"){
			cin >> x;
			if(s.empty()){
				s.push(x);
			}
			else{
				if(s.top() <x){
				s.push(s.top());
			}
			if(s.top()>=x){
				s.push(x);
			}
			}
		}
		if(a == "MIN"){
			if(s.empty()){
				cout << "EMPTY"  << endl;
			}
			else{
				cout << s.top() << endl;
			}
			
		}
		if(a == "POP"){
			if(s.empty()){
				cout << "EMPTY"  << endl;
			}
			else{
				s.pop();
			}
			
		}
	}
}
