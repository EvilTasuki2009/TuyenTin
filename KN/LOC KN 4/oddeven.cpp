#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("oddeven.inp", "r", stdin);
    freopen("oddeven.out", "w", stdout);

    int n, ct=0, k=0;
    cin >> n;
    long a[n*n];
    for(int i = 0; i < (n*n); i++){
        cin >> a[i];
    }
    for(int i = 0; i < n*n; i++){
        if(ct == n){
            cout<<endl;
            ct = 0;
        }
        else{
            if(a[i] % 2 != 0){
                cout<<a[i]<<' ';
                ct++;
            }
        }
    }
    ct=0;
    for(int i = 0; i < n*n; i++){
        if(ct == n){
            cout<<endl;
            ct = 0;
        }
        else{
            if(a[i] % 2 == 0){
                cout<<a[i]<<' ';
                ct++;
            }
        }
    }

    return 0;
}
