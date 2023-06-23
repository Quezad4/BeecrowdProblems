#include <iostream>
using namespace std;
int main(){
	string a, b, c;
	int K,count = 0;
	cin >> a >> K >> b;
	for(int i = 0; i<4; i++){
		cin >> c;
	}
	for(int i = 0; i<a.size(); i++){
		if(a[i] == b[i]){
			count++;
		}
	}
	if((a.size() - count > K )){
		cout << -1 << endl;
	}
	else{
		cout << 1 << endl;
		cout << a.size() - count << endl;
	}
}
