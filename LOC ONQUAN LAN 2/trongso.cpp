#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("trongso.inp", "r", stdin);
    freopen("trongso.out", "w", stdout);
    long n, trongsoln=0, ct=0;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
        ct=0;
        for(int j = 0; j < s[i].size(); j++){
            if(isdigit(s[i][j])){
                cout<<1;
            }
        }
    }


    return 0;
}
