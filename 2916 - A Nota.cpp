#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int main(){
	long long  int N, K, valores, soma = 0;
    while(cin >> N >> K){
		vector<long long int>v;
        for(long long int i = 0; i<N; i++){
            cin >> valores;
            v.push_back(valores);
        }
        sort(v.begin(), v.end());
        for(long long int i = v.size() - K; i<N; i++){
            soma += (v[i])%1000000007 ;
        }
        cout << (soma)%1000000007 << endl;
        soma = 0;
        
    }
}
