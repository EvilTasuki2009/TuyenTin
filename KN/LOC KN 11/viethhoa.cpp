#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("viethoa.inp", "r", stdin);
    freopen("viethoa.out", "w", stdout);

    string s;
    getline(cin, s);
    char a='Z';

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            while(s[i] == ' ' && s[i+1] == ' '){
                s.erase(s.begin()+i);
            }
        }
        if(isalpha(s[i]) == 1){
            s[i] = s[i] + 32;
        }
    }
    s[0] = s[0] - 32;
    for(int i = 1; i < s.size(); i++){
        if(isalpha(s[i]) && s[i-1] == ' '){
            s[i] = s[i] - 32;
        }
    }

    cout<<s;
    return 0;
}
