#include <bits/stdc++.h>
using namespace std;
string CongStr(string a , string b){
    string res = "";
    int r = 0;
    while(a[0] == '0')
        a.erase(0 , 1);
    while(b[0] == '0')
        b.erase(0 , 1);
    if(b.size() > a.size())
        swap(a , b);
    a = '0' + a;
    while(a.size() > b.size())
        b = '0' + b;
    for(int i = a.size() - 1 ; i >= 0 ; i--){
        res = char((a[i] + b[i] - 96 + r) % 10 + '0') + res;
        r = (a[i] + b[i] - 96 + r) / 10;
    }
    while(res[0] == '0' && res.size() > 1)
        res.erase(0 , 1);
    return res;
}
string ChuyenDoi(string s , char t){
    string power = "1" , ketqua = "0";
    for(int i = s.size() - 1 ; i >= 0 ; i--){
        if(s[i] == t)
            ketqua = CongStr(ketqua , power);
        power = CongStr(power , power);
    }
    return ketqua;
}
int main(){
    freopen("NHIPHANDAO.inp","r",stdin);
    freopen("NHIPHANDAO.out","w",stdout);
    string s;
    cin>>s;
    cout<<ChuyenDoi(s , '1')<<endl<<ChuyenDoi(s , '0');
    return 0;
}
