#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("loto.inp", "r", stdin);
    freopen("loto.out", "w", stdout);

    long n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                cout<<a[i]<<' ';
                for(int k = i; k < n; k++){
                    if(a[k] == a[i]){
                        a[k] = -1;
                    }
                }
            }
        }
    }

    return 0;
}
