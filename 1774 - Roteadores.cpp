#include <bits/stdc++.h>
using namespace std;
#define pb push_back
struct UF
{
    vector<int> pai,r; // R = rank 
    UF(int n)
    {
        pai.resize(n); // definir tamanho do vector pai
        r.resize(n); // definir tamanho do vector rank (nmr de ligações)
        for(int i=0;i<n;i++)
        {
            pai[i]=i; // cada um é seu pai, so consegue andar pra ele mesmo (ex: 0 é pai do zero)
            r[i]=1;  // apenas uma ligação r.
        }
    }
    UF(){}
    int acha(int x) // acha o pai
    {
        if(pai[x]==x)  // acha o pai, se nao achar continua
            return x;
        return pai[x]=acha(pai[x]);// 0 1 2 3 pai[x]
    }							   // 0	0 1 2   x
    void unir(int x, int y)
    {
        x=acha(x);  // x = pai
        y=acha(y);  // y = pai
        if(r[x]>r[y]) // se o pai x tiver mais filhos, usa ele 0 1 2 3 (vale a pena usar mais o "1" como pai)
					  // 									   0 1 1 1
        {
            pai[y]=x;
            r[x]+=r[y]; 
        }
        else          // se não usa o outro pai
        {
            pai[x]=y;
            r[y]+=r[x];
        }
    }
    bool mesmoConjunto(int x,int y)
    {
        return acha(x)==acha(y); // se todos (vértices) // se todos forem filhos do mesmo pai retorna true
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,pair<int,int> > >arestas;
    for(int i=0;i<m;i++)
    {
        int a,b,p;
        cin>>a>>b>>p;
        arestas.pb({p,{a,b}}); // aresta, vertice, peso
    }
    sort(arestas.begin(),arestas.end());
    UF stru(n+1);
    int ans=0;
    for(int i=0;i<arestas.size();i++)
    {
        int peso=arestas[i].first;
        int a=arestas[i].second.first;
        int b=arestas[i].second.second;
        if(!stru.mesmoConjunto(a,b))
        {
            stru.unir(a,b);
            ans+=(long long int)peso;
        }
    }
    cout<<ans<<endl;
}
