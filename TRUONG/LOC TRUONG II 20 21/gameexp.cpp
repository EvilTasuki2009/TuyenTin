#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("gameexp.inp", "r", stdin);
    freopen("gameexp.out", "w", stdout);

    long n, channn = LONG_MAX, leln = 0;
    cin >> n;
    long a[i];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(chann > a[i]){
                chann = a[i];
            }
        }
        if(i % 2 != 0){
            if(leln < a[i]){
                leln = a[i];
            }
        }
    }
    for(int i = 0; i < n; i++){

    }

    return 0;
}
