#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chuanhoa.inp", "r", stdin);
    freopen("chuanhoa.out", "w", stdout);

    string s = "";
    getline(cin , s);

    while(s[0] == ' '){
        s.erase(s.begin());
    }

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' && s[i+1] == ' '){
            while(s[i] == ' ' && s[i+1] == ' '){
                s.erase(s.begin()+i);
            }
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]) == 1){
            s[i] = s[i] + ' ';
        }
    }
    s[0] =  s[0] - ' ';
    for(int i = 1; i < s.size(); i++){
        if(s[i-1] == ' '){
            s[i] = s[i] - ' ';
        }
    }


    cout<<s;
    return 0;
}
