#include <bits/stdc++.h>
using namespace std;

bool isPrime(long n){
    if(n <= 1){
        return false;
    }
    else{
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("dayso.inp", "r", stdin);
    freopen("dayso.out", "w", stdout);

    int n, k, dem = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((a[i] % 2 == 0) && (a[j] % 2 != 0)){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((a[i] % 2 == 0) && (a[i] % 2 == 0)){
                if(a[i] > a[j]){
                    swap(a[i], a[j]);
                }
            }
            if((a[i] % 2 != 0) && (a[j] % 2 != 0)){
                if(a[i] < a[j]){
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    for(int i = n-1; i >= 0; i--){
        if(isPrime(a[i])){
            cout<<a[i]<<' ';
        }
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] + a[j] == k){
                a[i] = a[j] = -1;
            }
        }
    }
    cout<<endl;
    for(int i = 0; i < n; i++){
        if(a[i] != -1){
            cout<<a[i]<<' ';
            dem += 1;
        }
    }
    if(dem == 0){
        cout<<-1;
    }

    return 0;
}
