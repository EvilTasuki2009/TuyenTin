#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("virus.inp", "r", stdin);
    freopen("virus.out", "w", stdout);

    string s="";
    getline(cin, s);

    while(s[0] == ' '){
        s.erase(s.begin());
    }

    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]) == 1){
            while(isalpha(s[i]) == 1){
                s.erase(s.begin()+i);
            }
        }
        if(s[i] == ' ' && s[i+1] == ' '){
            while(s[i] == ' ' && s[i+1] == ' '){
                s.erase(s.begin()+i);
            }
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]) != 2 && s[i] != ' '){
            while(isalpha(s[i]) != 2 && s[i] != ' ')
                s.erase(s.begin()+i);
        }
    }


    cout<<s;
    return 0;
}
