#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("solonnhi.inp", "r", stdin);
    freopen("solonnhi.out", "w", stdout);

    int n;
    cin >> n;
    long a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }

    long ln = a[0];

    for(int i = 0; i < n; i++){
        if(ln > a[i]){
            cout<<a[i];
            return 0;
        }
    }

    cout<<-1;

    return 0;
}
