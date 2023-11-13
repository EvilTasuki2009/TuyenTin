#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("soitnhat.inp", "r", stdin);
    freopen("soitnhat.out", "w", stdout);

    int n;
    cin >> n;
    int a[n], b[10];
    fill(b, b+10, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        while(a[i] > 0){
            int m = a[i] % 10;
            a[i] /= 10;
            b[m]++;
        }
    }

    long minn = LONG_MAX;

    for(int i = 0; i < 10; i++){
        if(b[i] < minn){
            minn = b[i];
        }
    }
    cout<<minn;

    return 0;
}
