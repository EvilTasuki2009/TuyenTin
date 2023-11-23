#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("somax.inp", "r", stdin);
    freopen("somax.out", "w", stdout);

    string s;
    cin >> s;
    char ln;
    int sum=0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum++;
            if(s[i] > ln){
                ln = s[i];
            }
        }
    }
    cout<<sum<<endl<<ln;

    return 0;
}
