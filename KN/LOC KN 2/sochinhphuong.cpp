#include <bits/stdc++.h>
using namespace std;

bool isSquareNum(long n){
    int x;
    x = sqrt(n);
    if(x*x == n){
        return true;
    }
    return false;
}

int main(){
    freopen("sochinhphuong.inp", "r", stdin);
    freopen("sochinhphuong.out", "w", stdout);

    long a, b;
    cin >> a >> b;
    for(int i = a+1; i < b; i++){
        if(isSquareNum(i)){
            cout<<i<<' ';
        }
    }
    return 0;
}
