#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("tinhtoan.inp", "r", stdin);
    freopen("tinhtoan.out", "w", stdout);

    long n, m, lesser = 0, greatter = 0;
    cin >> n >> m;
    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < m){
            lesser += a[i];
        }
        else{
            greatter += a[i];
        }
    }
    cout<<greatter - lesser;


    return 0;
}
