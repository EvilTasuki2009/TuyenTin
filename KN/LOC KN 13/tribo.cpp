#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tribo.inp", "r", stdin);
    freopen("tribo.out", "w", stdout);

    long n;
    cin >> n;
    long t1, t2, t3, t;
    while(n > 0){
        t1 = 0, t2 = 0, t3 = 1, t = 0;
        while(t1 + t2 + t3 <= n){
            t = t1 + t2 + t3;
            t1 = t2, t2 = t3, t3 = t;
        }
        cout<<t<<' ';
        n -= t;
    }

    return 0;
}
