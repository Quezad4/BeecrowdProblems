#include <iostream>
 
int main(){
	unsigned long long int vet[4]={1,7,9,3};
	unsigned long long int n,x;scanf("%llu", &n);
	for(int i=0; i<n; i++){
		scanf("%llu", &x);
		printf("%llu\n", vet[x%4]);
	}
}
