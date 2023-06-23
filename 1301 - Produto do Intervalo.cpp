#include <bits/stdc++.h>
using namespace std;




vector<int> v;
vector<string> ans;

const int maxN = 100010;
class segTree{
	private:
		int N;
		int vet[4*maxN];
		int merge(int l, int r){
			return l*r;
		}
		void build(int id, int l, int r, vector<int> &a){
			if(l == r){
				vet[id] = a[l];
				return;
			}
			build(id*2,l,(l+r)/2, a); // constroi pra esquerda
			build(id*2+1,(l+r)/2+1,r,a); // controi para direita
			vet[id] = merge(vet[2*id], vet[2*id+1]);
		}
		int query(int id, int l, int r,int x, int y){
			if(x>r or y<l){ // se ta totalmente fora
				return 1; // valor que nao modifica a resposta
			}
			if(l>=x and r<= y){ // totalmente dentro
				return vet[id];
			}
			int p1 = query(2*id,l,(l+r)/2,x,y);
			int p2 = query(2*id+1,(l+r)/2+1,r,x,y);
			return merge(p1,p2); // cobre parcialmente
		}
		void update(int id, int l, int r, int x, int valor){ // trocar valores da seg
			if(x>r or x < l) return;
			if(x == l and x == r){
				vet[id] = valor;
				return;
			}
			update(2*id,l,(l+r)/2,x,valor);
			update(2*id+1,(l+r)/2+1,r,x,valor);
			vet[id] = merge(vet[2*id], vet[2*id+1]);
			
		}
		
	public:
		segTree(int newN, vector<int> &a){
			N = newN;
			build(1,0,N-1,a);
		}
		int query(int x, int y){
			return query(1,0,N-1,x-1,y-1); // x-1 e y-1 por conta de geralmente os ex comecarem com o primeiro vertice valendo 1;
		}
		void update(int x,int valor){
			update(1,0,N-1,x-1,valor);
		}	
		
};





int main(){
	//freopen("saida.txt", "w", stdout);
	int N, K, x, num1,num2;
	char letra;
	while(cin >> N >> K){
		
		for(int i = 0; i<N; i++){
			cin >> x;
			if(x == 0){
				v.push_back(0);
			}
			if(x>0){
				v.push_back(1);
			}
			if(x<0){
				v.push_back(-1);
			}
		}
		segTree ST(N,v);
		for(int i = 0; i<K; i++){
			cin >> letra >> num1 >> num2;
			if(letra == 'C'){
				if(num2 == 0){
					ST.update(num1,0);
				}
				if(num2<0){
					ST.update(num1,-1);
				}
				if(num2>0){
					ST.update(num1,1);
				}
				
			}
			else{
				int a = ST.query(num1,num2);
				if(a == 0){
					ans.push_back("0");
				}
				if(a<0){
					ans.push_back("-");
				}
				if(a>0){
					ans.push_back("+");
				}
				
			}
		}
		for(int i = 0; i<ans.size(); i++){
			cout << ans[i];
		}
		cout << endl;
		ans.clear();
		v.clear();
	}	
	
	
}






