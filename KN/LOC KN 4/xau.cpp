#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("xau.inp", "r", stdin);
    freopen("xau.out", "w", stdout);

    string s="", tmp="", lnest="";
    int space=0;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            space++;
        }
    }
    cout<<space+1<<endl;
    for(int i = 0; i < s.size(); i++){
        cout<<s[i];
        if(s[i] == ' '){
            cout<<endl;
        }
    }
    cout<<endl;
    for(int i = 0; i < s.size(); i++){
        tmp = "";
        if(isalpha(s[i])){
            while(isalpha(s[i])){
                tmp += s[i];
                i++;
            }
        }
        if(tmp.size() > lnest.size()){
            lnest = tmp;
        }
    }
    cout<<lnest<<endl<<lnest.size();


    return 0;
}
