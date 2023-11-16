#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("demtg.inp", "r", stdin);
    freopen("demtg.out", "w", stdout);
    int d, n, sum = 1;
    cin >> d >> n;
    if(d == 0){
        sum = 1;
    }
    else{
        sum = ((d+1)*(d+2))/2;
    }
    sum = sum * (n+1);
    cout<<sum;
    return 0;
}

