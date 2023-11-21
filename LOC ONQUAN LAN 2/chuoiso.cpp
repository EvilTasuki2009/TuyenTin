#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chuoiso.inp", "r", stdin);
    freopen("chuoiso.out", "w", stdout);

    string s1="", s2="";
    long s1number = 0, s2number = 0;
    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); i++){
        if(isdigit(s1[i])){
            s1number = s1number * 10 + (s1[i]-48);
        }
    }

    for(int i = 0; i < s2.size(); i++){
        if(isdigit(s2[i])){
            s2number = s2number * 10 + (s2[i]-48);
        }
    }

    cout<<s1number<<' '<<s2number<<endl<<s1number+s2number;
    return 0;
}
