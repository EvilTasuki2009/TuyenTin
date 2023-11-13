#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("sothuhai.inp", "r", stdin);
    freopen("sothuhai.out", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }

    cout<<a[1]<<endl<<a[n-2];

    return 0;
}
