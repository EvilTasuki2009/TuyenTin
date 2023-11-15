#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("matma.inp", "r", stdin);
    freopen("matma.out", "w", stdout);

    string s ="";
    long long ln = 0, tmp = 0, j=0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){

        if(ln < tmp){
            ln = tmp;
            tmp = 0;
        }
    }
    cout<<ln;


    return 0;
}
