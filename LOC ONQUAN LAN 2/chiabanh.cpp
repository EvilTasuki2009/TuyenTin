#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chiabanh.inp", "r", stdin);
    freopen("chiabanh.out", "w", stdout);

    int n = 8, a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long maxx = a[0] + a[1] + a[2] + a[3];
    for(int i = 1; i < n-4; i++){
        if(maxx < a[i] + a[i+1] + a[i+2] + a[i+3]){
            maxx = a[i] + a[i+1] + a[i+2] + a[i+3];
        }
    }
    cout<<maxx;

    return 0;
}
