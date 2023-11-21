#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b){
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

    long a, b, c, d;
    cin >> a >> b >> c >> d;
    long tu = a * d + b * c, mau = b * d;
    cout<<tu/gcd(tu, mau)<<' '<<mau/gcd(tu, mau)<<endl;
    tu = a * d - b * c;
    cout<<tu/gcd(tu, mau)<<' '<<mau/gcd(tu, mau)<<endl;
    tu = a * c;
    cout<<tu/gcd(tu, mau)<<' '<<mau/gcd(tu, mau)<<endl;
    tu = a * d, mau = b * c;
    cout<<tu/gcd(tu, mau)<<' '<<mau/gcd(tu, mau);

    return 0;
}
