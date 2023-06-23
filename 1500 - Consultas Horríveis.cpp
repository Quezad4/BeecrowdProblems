#include <bits/stdc++.h>
using namespace std;
const int maxN = 100010;


typedef long long int no;
#define int long long int



class segTree{
	private:
		int N;
		no vet[4*maxN];
		no lazy[4*maxN];
		no merge(no l, no r){
			return l+r;
		}
		void build(int id, int l, int r, vector<no> &a){
			if(l == r){
				vet[id] = a[l];
				return;
			}
			build(id*2,l,(l+r)/2, a); // constroi pra esquerda
			build(id*2+1,(l+r)/2+1,r,a); // controi para direita
			vet[id] = merge(vet[2*id], vet[2*id+1]);
		}
		no query(int id, int l, int r,int x, int y){
			push(id,r-l);
			if(x>r or y<l){ // se ta totalmente fora
				return 0; // valor que nao modifica a resposta
			}
			if(l>=x and r<= y){ // totalmente dentro
				return vet[id];
			}
			int p1 = query(2*id,l,(l+r)/2,x,y);
			int p2 = query(2*id+1,(l+r)/2+1,r,x,y);
			return merge(p1,p2); // cobre parcialmente
		}
		void update(int id, int l, int r, int x, int y, no valor){ // trocar valores da seg
			push(id,r-l);
			if(x>r or y < l) return;
			if(l>= x and r<=y){
				lazy[id] = valor;
				push(id,r-l);
				return;
			}
			update(2*id,l,(l+r)/2,x,y,valor);
			update(2*id+1,(l+r)/2+1,r,x,y,valor);
			vet[id] = merge(vet[2*id], vet[2*id+1]);
			
		}
		void push(int id, int child){
			no &l = lazy[id];
			if(l != 0){
				vet[id] += (long long)(l*(child+1));
				if(child){
					lazy[2*id] += l;
					lazy[2*id+1] += l;
				}
				l = 0;
			}
			
		}
		
	public:
		segTree(int newN, vector<no> &a){
			N = newN;
			build(1,0,N-1,a);
			memset(lazy,0,sizeof(lazy));
		}
		no query(int x, int y){
			return query(1,0,N-1,x-1,y-1); // x-1 e y-1 por conta de geralmente os ex comecarem com o primeiro vertice valendo 1;
		}
		void update(int x,int y,int valor){
			update(1,0,N-1,x-1,y-1,valor);
		}
		
};




vector<no> v;

signed main(){
	//freopen("saida.txt", "w", stdout);
	int T; cin >> T;
	int N, C, x,y,z, num;
	for(int i = 0; i<T; i++){
		cin >> N >> C;
		v.assign(N*4,0);
		segTree ST(N,v);
		for(int j = 0; j<C; j++){
			cin >> num;
			if(num){
				cin >> x >> y;
				if(x>y) swap(x,y);
				cout<< ST.query(x,y) << endl;
			}
			else{
				cin >> x >> y >> z;
				if(x>y) swap(x,y);
				ST.update(x,y,z);
			}
		}
	}
}






