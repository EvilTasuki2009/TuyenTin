#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tinhnhanh.inp", "r", stdin);
    freopen("tinhnhanh.out", "w", stdout);

    int n, m;
    int lesser = 0, larger = 0;
    cin >> n >> m;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < m){
            lesser += a[i];
        }
        else{
            if(a[i] > m){
                larger += a[i];
            }
        }
    }
    cout<<larger-lesser;

    return 0;
}
