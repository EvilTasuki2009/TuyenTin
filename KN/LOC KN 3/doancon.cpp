#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("doancon.inp", "r", stdin);
    freopen("doancon.out", "w", stdout);

    long n;
    cin >> n;
    long a[n], nn = LONG_MAX, ln = LONG_MIN, pos = 0, dc = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] > ln){
            ln = a[i];
            pos = i;
        }
    }

    cout<<pos;



    return 0;
}
