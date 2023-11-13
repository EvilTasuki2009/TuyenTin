#include <bits/stdc++.h>
using namespace std;

bool isSquareNum(long x){
    int value;
    value = sqrt(x);
    if(value * value == x){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    freopen("sochinhphuong.inp", "r", stdin);
    freopen("sochinhphuong.out", "w", stdout);

    long a, b, sum = 0;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(isSquareNum(i)){
            sum++;
        }
    }
    cout<<sum;

    return 0;
}
