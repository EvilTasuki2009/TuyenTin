#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    a = abs(a);
    b = abs(b);
    while(a*b != 0){
        a %= b;
        swap(a, b);
    }
    return a+b;
}

int main(){
    freopen("phanso.inp", "r", stdin);
    freopen("phanso.out", "w", stdout);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long tu = a*d-c*b, mau = b*d;
    cout<<tu/gcd(tu, mau)<<' '<<mau/gcd(tu, mau);
    return 0;
}
