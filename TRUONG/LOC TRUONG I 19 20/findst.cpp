#include <bits/stdc++.h>
using namespace std;

bool isdx(string x){
    string s="";
    for(int i = x.size()-1; i >= 0; i--){
        s = s+x[i];
    }
    if(s.compare(x) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    freopen("findst.inp", "r", stdin);
    freopen("findst.out", "w", stdout);

    string s="", s1="", sx = "";
    bool own = false;
    long sum = 0, j = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        own = false;
        for(int j = 0; j < s1.size(); j++){
            if(s[i] == s1[j]){
                own = true;
            }
        }
        if(own == false){
            s1 += s[i];
            sum++;
        }
    }
    cout<<sum<<endl;

    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){

        }
    }



    return 0;
}
