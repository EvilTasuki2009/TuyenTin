#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("matma.inp", "r", stdin);
    freopen("matma.out", "w", stdout);

    string s="";
    cin >> s;
    char ln = '0';
    char nn = '9';
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            if(s[i] < nn){
                nn = s[i];
            }
            if(s[i] > ln){
                ln = s[i];
            }
        }
    }

    cout<<ln<<nn;

    return 0;
}
