#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("matma.inp", "r", stdin);
    freopen("matma.out", "w", stdout);

    string s="";
    cin >> s;
    long sum=0;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            if((s[i]-48) % 2 == 0){
                sum = sum + (s[i]-48);
            }
        }
    }
    cout<<sum;

    return 0;
}
