#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("xuly.inp", "r", stdin);
    freopen("xuly.out", "w", stdout);

    string s="";
    long space = 0;
    getline(cin, s);


    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }
        if(s[i] == 32){
            space++;
        }
    }
    cout<<s<<endl;
    if(s == ""){
        return 0;
    }
    else{
        cout<<space+1<<endl;
    }

    cout<<1<<' ';
    for(int i = 0; i < s.size(); i++){
        if(s[i-1] == 32){
            cout<<i+1<<' ';
        }
    }



    return 0;
}
