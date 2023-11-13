#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("sobenhat.inp", "r", stdin);
    freopen("sobenhat.out", "w", stdout);

    string s="";
    long k, pos = 0;
    cin >> s >> k;
    char ln;

    for(int i = 0; i < k; i++){
        ln = s[0], pos = 0;
        for(int j = 0; j < s.size(); j++){
            if(ln < s[j]){
                ln = s[j];
                pos = j;
            }
        }
        s.erase(s.begin() + pos);
    }

    for(int i = 0; i < s.size(); i++){
        for(int j = i+1; j < s.size(); j++){
            if(s[i] > s[j]){
                swap(s[i], s[j]);
            }
        }
    }
    cout<<s;

    return 0;
}
