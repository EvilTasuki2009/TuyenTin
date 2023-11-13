#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("phepnhan.inp", "r", stdin);
    freopen("phepnhan.out", "w", stdout);

    string a="", b="";
    long long sum = 0;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }
    cout<<sum;

    return 0;
}
