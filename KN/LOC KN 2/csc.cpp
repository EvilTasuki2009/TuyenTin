#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("csc.inp", "r", stdin);
    freopen("csc.out", "w", stdout);

    int a[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 3; i++){
        a[i] = abs(a[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    int k=a[1]-a[0];
    if(a[2] - k > a[1]){
        cout<<a[2] - k;
    }
    else{
        cout<<a[2] + k;
    }

    return 0;
}
