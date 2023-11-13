#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("hoten.inp", "r", stdin);
    freopen("hoten.out", "w", stdout);

    string s="", ho="", tent="", ten="";
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            break;
        }
        ho += s[i];
    }

    for(int i = s.size()-1; i >= 0; i--){
        if(s[i] == ' '){
            break;
        }
        tent += s[i];
    }

    for(int i = tent.size() - 1; i >= 0; i--){
        ten += tent[i];
    }

    cout<<ho<<endl<<ten;

    return 0;
}
