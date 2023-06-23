#include <iostream>
using namespace std;
int main(){
	string a, b;
	int count = 0, countTot = 0;
	cin >> a >> b;
	for(int j = 0;j<=(a.size() - b.size()); j++){
		count = 0;
		for(int i = 0; i<b.size(); i++){
			if(a[j+i] == b[i]){
				count ++;
			}
		}
		if(count == 0){
			countTot++;
		}
	}
	cout << countTot << endl;
}
