#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("virus.inp", "r", stdin);
    freopen("virus.out", "w", stdout);

    string s="";
    getline(cin, s);

    for(int i = 0; i < s.size()-1; i++){
        while(s[i] == ' ' && s[i+1] == ' '){
            s.erase(s.begin()+i);
        }
        while(isalpha(s[i]) != 2 && s[i] != ' '){
            s.erase(s.begin()+i);
        }
    }
    cout<<s;

    return 0;
}
