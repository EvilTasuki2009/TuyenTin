#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("duarobot.inp", "r", stdin);
    freopen("duarobot.out", "w", stdout);

    long n, d, sum = 0;
    cin >> n >> d;
    long a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        b[i] = d/a[i]+i;
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = i-1; j >= 0; j--){
            if(b[i] < b[j]){
                sum++;
            }
        }
    }
    cout<<sum;



    return 0;
}
