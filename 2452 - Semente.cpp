#include <bits/stdc++.h>
using namespace std;


int f;
bool isValid(int N){
    if(N>=f or N<0) return false;
    return true;
}
int main(){
    int r;
    int valor;
    cin >> f >> r;
    vector<bool> h; 
    vector<int> v;
    vector<int> aux;
    h.assign(f,false);
    for(int i = 0; i<r; i++){
        cin >> valor;
        v.push_back(valor-1);
        h[valor-1] = true;
    }
    int count = r;
    int countd = 0;
    while(count!= f){
        countd++;
        for(int i = 0; i<v.size(); i++){
            if(isValid(v[i]-1) and h[v[i]-1] == false){
                h[v[i]-1] = true;
                count++;
                aux.push_back(v[i]-1);
            }
            if(isValid(v[i]+1) and h[v[i]+1] == false){
                h[v[i]+1] = true;
                count++;
                aux.push_back(v[i]+1);
            }
        }
        v.clear();
        v = aux;
        aux.clear();
    }
    cout << countd << endl;
}
