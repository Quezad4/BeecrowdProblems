#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int buscaBin(int begin, int end, int item){
    int i = (begin+end)/2;
    if(begin>end) return -1;
    if(v[i] == item){
        return i; 
    }
    if(v[i]< item){
         return buscaBin(i+1,end,item);
    }
    else return buscaBin(begin,i-1,item);
}



int main(){
    //freopen("saida.txt","w",stdout);
    int n, q;
    int count = 0;
    while(cin >> n >> q && n && q){
        v.clear();
        count++;
        for(int i = 0; i<n; i++){
            int valor;
            cin >> valor;
            v.push_back(valor);
        }
        sort(v.begin(),v.end());
        cout << "CASE# " << count << ":" << endl;
        for(int i = 0; i<q; i++){
            int querie;
            cin >> querie;
            int resp = buscaBin(0,n-1,querie);
            int aux = resp;
            if(resp == -1){
                cout << querie << " not found" << endl;
            }
            else{
                for(int j = aux; j>=0; j--){
                    if(v[j] == v[resp]){
                        resp = j;
                    }
                }
                cout << querie << " found at " << resp+1 << endl;
            }
        }
    }
}
