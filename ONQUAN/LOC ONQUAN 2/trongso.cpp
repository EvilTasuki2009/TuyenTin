#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("trongso.inp", "r", stdin);
    freopen("trongso.out", "w", stdout);
    int n, ct = 0, sum = 0;
    cin >> n;
    float trongso[n];
    string s[n];
    string temp="";

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        temp = s[i];
        ct = 0;
        sum = 0;
        for(int j = 0; j < temp.size(); j++){
            if(isdigit(temp[j])){
                sum = sum + (temp[j] - 48);
                ct = ct + 1;
            }
        }
        if(ct == 0){
            trongso[i] = 0;
        }
        else{
            trongso[i] = (float)sum/ct;
        }

    }

    int dem = 0;
    float maxx = trongso[0];
    for(int i = 0; i < n; i++){
        if(maxx < trongso[i]){
            maxx = trongso[i];
            dem = i;
        }
    }
    cout<<s[dem];

    return 0;
}
