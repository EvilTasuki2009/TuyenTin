#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("xaugon.inp", "r", stdin);
    freopen("xaugon.out", "w", stdout);

    string s1="", s="";
    char tmp;
    int ct=0;
    getline(cin , s1);

    for(int i = 0; i < s1.size(); i++){
        tmp = s1[i];
        s += tmp;
        while(tmp == s1[i+1]){
            s1.erase(s1.begin()+i);
        }
    }
    cout<<s1;


    return 0;
}
