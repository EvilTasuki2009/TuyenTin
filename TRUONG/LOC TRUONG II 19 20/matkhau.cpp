#include <bits/stdc++.h>
using namespace std;

long gcd(long x, long y){
    while(x*y != 0){
        x = x%y;
        swap(x, y);
    }
    return x+y;
}

int main(){
    freopen("matkhau.inp", "r", stdin);
    freopen("matkhau.out", "w", stdout);

    int k;
    cin >> k;
    int a[k];
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    long tmp = a[0];
    for(int i = 0; i < k-1; i++){
        tmp = tmp*a[i+1]/gcd(tmp, a[i+1]);
    }
    cout<<tmp;



    return 0;
}
