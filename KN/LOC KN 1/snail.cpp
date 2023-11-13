#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("snail.inp", "r", stdin);
    freopen("snail.out", "w", stdout);
    long v, a, b, tong = 0, dem=0;
    cin >> a >> b >> v;
    while(true){
        dem += 1;
        tong += a;
        if(tong >= v){
            break;
        }
        tong -= b;
    }
    cout<<dem;
    return 0;
}
