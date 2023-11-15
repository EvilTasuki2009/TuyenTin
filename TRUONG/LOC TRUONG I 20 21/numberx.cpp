#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y){
    while(x*y != 0){
        x %= y;
        swap(x, y);
    }
    return x + y;
}

int main(){
    freopen("numberx.inp", "r", stdin);
    freopen("numberx.out", "w", stdout);

    long long a, b;
    cin >> a >> b;
    cout<<a*b/gcd(a,b) - a - b;

    return 0;
}
