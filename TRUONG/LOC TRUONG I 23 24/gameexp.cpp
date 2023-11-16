#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("gameexp.inp", "r", stdin);
    freopen("gameexp.out", "w", stdout);

    long n, channn = LONG_MAX, leln = 0, indexn = 0, indexl = 0;
    cin >> n;
    long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(channn > a[i]){
                channn = a[i];
                indexn = i;
            }
        }
        if(i % 2 != 0){
            if(leln < a[i]){
                leln = a[i];
                indexl = i;
            }
        }
    }
    swap(a[indexl], a[indexn]);
    long sum = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            sum += a[i];
        }
        else{
            sum -= a[i];
        }
    }
    cout<<sum;

    return 0;
}
