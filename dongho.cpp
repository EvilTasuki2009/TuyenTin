#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("dongho.inp", "r", stdin);
    freopen("dongho.out", "w", stdout);

    string n;
    cin >> n;

    if(n[0] == '+'){
        cout<<1+(n[1]-48)%12;
    }
    else{
        if((n[1] - 48)%12 == 1){
            cout<<12;
        }
        else{
            cout<<13 - (n[1] % 12);
        }
    }

    return 0;
}
