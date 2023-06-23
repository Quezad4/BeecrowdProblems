#include <iostream>
using namespace std;
int main(){
    int N, Q, count = 0, aux;
    string a, b;
    cin >> N;
    for(int i = 0; i<N; i++){
        cin >> a;
        cin >> Q;
        for(int k = 0; k<Q; k++){
            cin >> b;
			for(int v = 0, j = 0; j<a.size(); j++){
				if(a[j] == b[v]){
					count ++;
					aux = count;
					v++;
				}
			}
            if(aux == b.size()){
                cout << "Yes" << endl;
                count = 0;
            }
            else{
                cout << "No" << endl;
                count = 0;
            }
        }
        
    }
}
