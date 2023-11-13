#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("phantuchung.inp", "r", stdin);
    freopen("phantuchung.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    long a[n], b[m];
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
                for(int g = i; g < n; g++){
                    if(b[j] == a[g]){
                        a[g] = LONG_MIN;
                    }
                }
            }
        }
    }

    return 0;
}
