#include <bits/stdc++.h>
using namespace std;

string dec_to_bin(long n){
    string s1 = "", s="";
    while(n > 0){
        if(n % 2 == 1){
            s1 += 'A';
        }
        else{
            s1 += 'O';
        }
        n/=2;
    }
    for(int i = s1.size()-1; i >= 0; i--){
        s += s1[i];
    }
    if(s.size() <= 4){
        for(int i = 0; i <= 5-s.size(); i++){
            s = 'O' + s;
        }
    }
    return s;
}

int main(){
    freopen("caudo.inp", "r", stdin);
    freopen("caudo.out", "w", stdout);

    long n;
    cin >> n;
    string s = dec_to_bin(n);
    if(s.size() <= 4){
        s = 'O' + s;
    }
    cout<<s[0];
    for(int i = 1; i < s.size(); i++){
        cout<<' '<<s[i];
    }


    return 0;
}
