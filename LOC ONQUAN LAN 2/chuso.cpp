#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("chuso.inp", "r", stdin);
    freopen("chuso.out", "w", stdout);

    string s="", tmp="", lng="";
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            tmp = "";
            while(isdigit(s[i])){
                tmp += s[i];
                i++;
            }
            if(lng < tmp){
                lng = tmp;
            }
        }
    }
    cout<<lng.size()<<endl<<lng;

    return 0;
}
