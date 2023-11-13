#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("maxxau.inp", "r", stdin);
    freopen("maxxau.out", "w", stdout);
    string s;
    cin >> s;
    string maxx;
    char maxxchar = s[0];
    int dem = 0;

    for(int i = 0; i < s.size()-1; i++){
        if(maxxchar < s[i]){
            maxxchar = s[i];
            dem = i+1;
        }
    }

    maxx += maxxchar;

    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == maxxchar){
            s[i] = '0';
        }
    }

    maxxchar = s[dem];

    for(int i = dem; i < s.size()-1; i++){
        if(maxxchar < s[i]){
            maxxchar = s[i];
            dem = i+1;
        }
    }

    maxx += maxxchar;

    for(int i = dem; i < s.size()-1; i++){
        if(s[i] == maxxchar){
            s[i] = '0';
        }
    }

    maxxchar = s[dem];

    for(int i = dem; i < s.size(); i++){
        if(maxxchar < s[i]){
            maxxchar = s[i];
        }
    }

    maxx += maxxchar;

    cout<<maxx;
    return 0;
}
