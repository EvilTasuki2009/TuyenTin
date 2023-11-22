#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("caesar.inp", "r", stdin);
    freopen("caesar.out", "w", stdout);

    string s="", tmp="";
    int k;
    cin >> s;
    cin >> k;
    for(int i = 0; i < s.size(); i++){
        if(s[i] - k >= 97){
            s[i] = s[i]-k;
        }
        else{
            s[i] = 122 - (s[i] - 97);
        }
    }
    cout<<s;

    return 0;
}
