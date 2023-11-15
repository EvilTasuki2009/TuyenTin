#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("sothuhai.inp", "r", stdin);
    freopen("sothuhai.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[j] > a[i]){
                swap(a[j], a[i]);
            }
        }
    }

    long nn = a[n-1], ln = a[0];

    for(int i = 0; i < n; i++){
        if(ln > a[i]){
            cout<<a[i]<<' ';
            break;
        }
    }

    for(int i = n-1; i >= 0; i--){
        if(nn < a[i]){
            cout<<a[i];
            break;
        }
    }

    if(nn == ln){
        cout<<-1<<' '<<-1;
    }

    return 0;
}

