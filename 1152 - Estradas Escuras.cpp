#include <bits/stdc++.h>
#define saida freopen("saida.txt", "w",stdout)
using namespace std;
#define pb push_back
struct UF
{
    vector<int> pai,r;
    UF(int n)
    {
        pai.resize(n);
        r.resize(n);
        for(int i=0;i<n;i++)
        {
            pai[i]=i;
            r[i]=1;
        }
    }
    int acha(int x)
    {
        if(pai[x]==x){
			 return x;
		}
        return pai[x]=acha(pai[x]);
    }
    void unir(int x, int y)
    {
        x=acha(x);
        y=acha(y);
        if(r[x]>r[y])
        {
            pai[y]=x;
            r[x]+=r[y];
        }
        else
        {
            pai[x]=y;
            r[y]+=r[x];
        }
    }
    bool mesmoConjunto(int x,int y)
    {
        return acha(x)==acha(y);
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    while(n or m){
		vector<pair<int,pair<int,int> > >arestas;
		for(int i=0;i<m;i++)
		{
			int a,b,p;
			cin>>a>>b>>p;
			arestas.pb({p,{a,b}});
		}
		sort(arestas.begin(),arestas.end());
		UF stru(n+1);
		long long int ans=0;
		for(int i=0;i<arestas.size();i++)
		{
			int peso=arestas[i].first;
			int a=arestas[i].second.first;
			int b=arestas[i].second.second;
			if(!stru.mesmoConjunto(a,b))
			{
				stru.unir(a,b);
			}
			else{
				ans+=(long long int)peso;
			}
		}
		cout<<ans<<endl;
		cin >> n >> m;
	}
}
